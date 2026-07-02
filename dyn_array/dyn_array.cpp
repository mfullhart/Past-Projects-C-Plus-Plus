/**
 * @file dyn_array.cpp
 * @brief A dynamic array demonstration program.
 *
 * A program that demonstrates dynamic allocation of arrays
 * on the heap.
 *
 * @author Mei-ling Fullhart (mfullhart20@georgefox.edu)
 */

#include <iostream>

int main(int argc, char* argv[])
{
    // Determine array capacity from command-line args
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <N>" << std::endl;
        return 1;  // Return non-zero status code for no input
    }

    // Convert the command-line argument to an integer
    int N = std::atoi(argv[1]);

    // Check if N is a valid positive integer
    if (N <= 0)
    {
        std::cerr << "Error: N must be a positive integer." << std::endl;
        return 1;  // Return non-zero status code for invalid input
    }

    // Dynamically allocate array
    auto* array = new unsigned long long[N];

    // Populate array
    for (int i = 0; i < N; ++i)
    {
        array[i] = 1ULL << i;  // Equivalent to 2^i
    }

    // Iterate through array and print contents to stdout
    for (int i = 0; i < N; ++i)
    {
        std::cout << array[i] << std::endl; // Print array with each value on a new line
    }

    // Free allocated array
    delete[] array;

    return 0;  // Return zero status code for successful execution
}

