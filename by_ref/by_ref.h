/**
 * @file by_ref.h
 * @brief Declarations for the by_ref program.
 *
 * @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
 */

#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// TODO declare helper methods
void get_values(vector<double>& values)
{
    double value;
    while (true)
        {
        cout << "Enter a value: ";
        if (!(cin >> value))
        {

            cerr << "Error: Invalid value entered." << endl;
            exit(2);
        }
        if (value < 0) break;
        values.push_back(value);
    }
}

void calc_stats(const vector<double>& values, int* count, double* sum, double* mean)
{
    *count = values.size();
    *sum = 0.0;
    for (double val : values)
    {
        *sum += val;
    }
    *mean = (*count > 0) ? (*sum / *count) : 0.0;
}

void print_stats(const int& count, const double& sum, const double& mean)
{
    cout << "Count: " << count << endl;
    cout << fixed << setprecision(6);
    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
}

