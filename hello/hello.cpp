/**
 * @file hello.cpp
 * @brief A basic "Hello, World!" program.
 *
 * A basic "Hello, World!"-style command-line program that prompts
 * the user for info and then prints a greeting.
 *
 * @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    string firstName, lastName;

    cout << "Enter your first name: " << endl;
    getline(cin, firstName);

    if (firstName.empty())
    {
        // Print a generic greeting if no name was entered
        cout << "Hello, world!" << endl;
    }
    else
    {
        cout << "Enter your last name: " << endl;
        getline(cin, lastName);

        // Print a personalized greeting if a name was entered
        cout << "Hello, " << firstName << " " << lastName << "!" << endl;
    }

    return 0;
}

