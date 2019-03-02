#include <bits/stdc++.h>
/**
 * @file   ModularExponentiation.cpp
 * @date   Jun 29, 2018
 * @brief  Code for the competitive programming workshop.
 */
using namespace std;
/**
 * @brief  Recursive exponentiation with mod.
 */
unsigned long modExp( unsigned long x, unsigned long n,  unsigned long m )
{
	if( n == 0 )
		return 1;

	if( n == 1 )
		return x % m;
	
	if( n%2 == 1)
		return x*modExp(x*x % m, (n - 1)/2, m) % m;
	else
		return   modExp(x*x, n/2, m) % m;
}
/**
 * @brief  Iterative exponentiation with mod.
 */
unsigned long itModExp( unsigned long x, unsigned long n, unsigned long m )
{
	unsigned long ans = 1;

	while( n > 0 )
	{
	    if( n%2 == 1 )
			ans = ans * x % m;
		x = x*x % m;
		n = n/2;		
	}

	return ans;
}
/**
 * @brief  Main function.
 */
int main( void )
{
	unsigned long x, n, m;
	cin >> x >> n >> m;
	cout << itModExp(x, n, m) << endl;
	return 0;
}
