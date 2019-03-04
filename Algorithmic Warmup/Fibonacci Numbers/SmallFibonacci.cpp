/**
 * @file   LeastCommonMultiple.cpp
 * @date   May 23, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Naive Fibonacci numbers.
 */
unsigned int fibo( unsigned long n )
{
	if(n == 0 || n == 1)
		return n;
	else
		return fibo(n - 1) + fibo(n - 2);
}
/**
 * @brief  Botton-up approach for Fibonacci numbers.
 */
unsigned int memoFibo( unsigned long n )
{
	unsigned long memo[n + 1];
	
	memo[0] = 0;
	memo[1] = 1;

	for(int i = 2; i <= n; ++i)
		memo[i] = (memo[i - 1] + memo[i - 2]);

	return memo[n];
}
/**
 * @brief  Main function.
 */
int main( void )
{
	unsigned long n;
	cin >> n;	
	cout << fibo(n) << endl;
	return 0;
}
