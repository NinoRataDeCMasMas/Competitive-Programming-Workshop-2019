/**
 * @file   GreatestCommonDivisor.cpp
 * @date   May 22, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief  Euclidean Algorithm.
 */
unsigned int GCD( unsigned long a, unsigned long b )
{
    return (b == 0) ? a : GCD(b, a%b); 
}
/**
 * @brief  Main function.
 */
int main( void )
{
    unsigned long a, b;
    std::cin >> a >> b;
    std::cout << GCD(a,b) << std::endl;
    return 0;
}

