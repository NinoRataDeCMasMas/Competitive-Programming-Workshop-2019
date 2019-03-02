/**
 * @file   GreatestCommonDivisor.cpp
 * @date   May 22, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Euclidean Algorithm.
 */
unsigned int GCD( unsigned long a, unsigned long b )
{
	if(b == 0)
		return a;
	else
		return GCD(b, a%b);
}
/**
 * @brief  Main function.
 */
int main( void )
{
	unsigned long a, b;	
	cin >> a >> b;
	
	cout << GCD(a,b) << endl;
	return 0;
}

