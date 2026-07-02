/**
 * @file by_ref.cpp
 * @brief Implementation for the by_ref program.
 *
 * @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
 */

#include "by_ref.h"

int main(int argc, char* argv[])
{
    // TODO implement program
    std::vector<double> values;
    get_values(values);

    if (values.empty()) {
        std::cerr << "Error: No values entered." << std::endl;
        return 1;
    }

    int count;
    double sum, mean;
    calc_stats(values, &count, &sum, &mean); // Now passes by reference
    print_stats(count, sum, mean);

    return 0;
}

// TODO implement helper methods
class StatsHelper {
public:
    /**
     * @brief Prompts the user to enter values and stores them in the vector.
     * @param values Reference to the vector storing user-entered values.
     */
    void get_values(std::vector<double>& values);

    /**
     * @brief Computes the count, sum, and mean of the values in the vector.
     * @param values Reference to the vector storing user-entered values.
     * @param count Pointer to an integer that will store the count of values.
     * @param sum Pointer to a double that will store the sum of values.
     * @param mean Pointer to a double that will store the mean of values.
     */
    void calc_stats(const std::vector<double>& values, int* count, double* sum, double* mean);

    /**
     * @brief Prints the computed statistics with six decimal places precision.
     * @param count Reference to an integer storing the count of values.
     * @param sum Reference to a double storing the sum of values.
     * @param mean Reference to a double storing the mean of values.
     */
    void print_stats(const int& count, const double& sum, const double& mean);
};
