/**
 * @file olleh.cpp
 * @brief A basic "Hello, World!" program.
 *
 * A basic "Hello, World!"-style command-line program that prints out
 * the command-line arguments in reverse order.
 *
 * @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
 */

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char* argv[])
{
    stack<char> charStack;

    // If no arguments are provided, prompt the user for input
    string input;
    if (argc < 2)
    {
        cout << "No command-line argument provided. Please enter an input: " << endl;
        getline(cin, input);

        if (input.empty())
        {
            cerr << "Error: No input provided." << endl;
            return 1;
        }
    }
    else
    {
        // Combine command-line arguments into a single string with spaces
        for (int i = 1; i < argc; ++i)
        {
            input += argv[i];
            if (i < argc - 1)
            {
                input += ' ';
            }
        }
    }

    // Push all characters into the stack
    for (char c : input)
    {
        charStack.push(c);
    }

    // Pop and print characters from the stack to reverse the string
    while (!charStack.empty())
    {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;

    return 0;
}