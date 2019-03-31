/**
 * @file   greedy.cpp
 * @date   May 29, 2018
 * @brief  Greedy primitive calculator code for
 *         the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief Greedy way.
 */
int greedyCalculator( int n )
{
    int numOps = 0;

    while(n > 1)
    {
        numOps += 1;
        n = (n%3 == 0) ? n/3 : (n%2 == 0) ? n/2 : n - 1;
    }
    return numOps;
}
/**
 * @brief Main function.
 */
int main(int argc, char **argv)
{
    int n = std::atoi(argv[1]);
    std::cout << greedyCalculator(n) << std::endl;
    return 0;
}
/* EOF */
