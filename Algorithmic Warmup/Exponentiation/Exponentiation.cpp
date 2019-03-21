/**
 * @file   Exponentiation.cpp
 * @date   Jun 29, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Recursive exponentiation Algorithm.
 */
unsigned long exp( unsigned long x, unsigned long n )
{
    if(n == 0) return 1;
    if(n == 1) return x;

    if(n%2 == 1) return x*exp(x*x, (n - 1)/2);
    else return exp(x*x, n/2);
}
/**
 * @brief  Iterative exponentiation Algorithm.
 */
unsigned long itExp( unsigned long x, unsigned long n )
{
    unsigned long ans = 1;

    while( n > 0 )
    {
        if(n%2 == 1) ans = ans * x;
        x = x*x;
        n = n/2;
    }

    return ans;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    unsigned long x, n;
    cin >> x >> n;
    cout << exp(x, n) << endl;
    return 0;
}
