#include <iostream>
#include <stdexcept> // For std::exception
#include <string>    // For std::string

// =============================================
// Custom Exception Class for Banking Errors
// =============================================
class BankingException : public std::exception
{
private:
    std::string errorMessage;  // Stores the detailed error message
    int errorCode;             // Custom error code (e.g., 1001 for insufficient funds)

public:
    // Constructor: Initializes the error message and code
    BankingException(const std::string& message, int code)
        : errorMessage(message), errorCode(code) {}

    // Override what() to return the error message (must be noexcept)
    const char* what() const noexcept override
    {
        return errorMessage.c_str();
    }

    // Gets the numeric error code
    int getErrorCode() const
    {
        return errorCode;
    }
};

// =============================================
// Bank Account Class (Simulates Banking Operations)
// =============================================
class BankAccount {
private:
    double balance;  // Current account balance

public:
    // Constructor: Initializes balance (default = 0)
    BankAccount(double initialBalance = 0.0) : balance(initialBalance)
    {
        if (initialBalance < 0)
        {
            // Throws BankingException if initialBalance is negative
            throw BankingException("Invalid initial balance! Must be >= 0.", 1000);
        }
    }

    // Deposits money into the account
    void deposit(double amount)
    {
        if (amount <= 0)
        {
            // Throws BankingException if amount is not positive
            throw BankingException("Deposit amount must be positive!", 1001);
        }
        balance += amount;
        std::cout << "Deposited: $" << amount << " | New Balance: $" << balance << std::endl;
    }

    // Withdraws money from the account (throws exception if insufficient funds)
    void withdraw(double amount)
    {
        if (amount <= 0)
        {

            // Throws BankingException if amount is not positive
            throw BankingException("Withdrawal amount must be positive!", 1002);
        }

        if (amount > balance)
        {
            // Throws BankingException if amount greater than balance
            throw BankingException("Insufficient funds for withdrawal!", 1003);
        }
        balance -= amount;
        std::cout << "Withdrew: $" << amount << " | Remaining Balance: $" << balance << std::endl;
    }

    // Returns the current balance
    double getBalance() const
    {
        return balance;
    }
};

// =============================================
// Main Function (Demonstrates Exception Handling)
// =============================================
int main()
{
    try
    {
        // Create a bank account with $500
        BankAccount account(500.0);
        std::cout << "Initial Balance: $" << account.getBalance() << std::endl;

        // Deposit $200 (valid)
        account.deposit(200.0);

        // Attempt to withdraw $800 (throws exception)
        account.withdraw(800.0);  // This will fail (only $700 available)

    }

    catch (const BankingException& e)
    {
        // Catch custom BankingException
        std::cerr << "Banking Error (" << e.getErrorCode() << "): " << e.what() << std::endl;
    }

    catch (const std::exception& e)
    {
        // Catch other standard exceptions
        std::cerr << "Standard Exception: " << e.what() << std::endl;
    }

    catch (...)
    {
        // Catch any other unexpected errors
        std::cerr << "Unknown error occurred!" << std::endl;
    }

    return 0;
}