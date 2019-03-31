/**
 * @file   recursive.cpp
 * @date   May 29, 2018
 * @brief  Recursive primitive calculator code for
 *         the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief Recursive way.
 */
int recursiveCalculator( int n )
{
    if(n <= 1) return 0;

    int x = n, y = n, z = n;

    x = recursiveCalculator(n - 1);
    if(n % 2 == 0) y = recursiveCalculator(n/2);
    if(n % 3 == 0) z = recursiveCalculator(n/3);

    return 1 + std::min({x, y, z});
}
/**
 * @brief Main function.
 */
int main(int argc, char **argv)
{
    int n = std::atoi(argv[1]);
    std::cout << recursiveCalculator(n) << std::endl;
    return 0;
}
/* EOF */
