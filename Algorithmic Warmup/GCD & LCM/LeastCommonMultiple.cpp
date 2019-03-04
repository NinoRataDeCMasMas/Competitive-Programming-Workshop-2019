/**
 * @file   LeastCommonMultiple.cpp
 * @date   May 23, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Euclidean Algorithm.
 */
unsigned int GCD( unsigned long a, unsigned long b )
{
	return (b == 0) ? a : GCD(b, a%b); 
}
/**
 * @brief  Least common multiple.
 */
unsigned long LCM( unsigned long a, unsigned long b )
{
	return (a*b) / GCD(a,b);	
}
/**
 * @brief  Main function.
 */
int main( void )
{
	unsigned long a, b;	
	cin >> a >> b;
	
	cout << LCM(a,b) << endl;	
	return 0;
}
