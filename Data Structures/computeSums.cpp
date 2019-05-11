/**
 * @file   computeSums.cpp
 * @date   May 9, 2018
 * @brief  Preparation for #GranPremioMX2019.    
 */
#include <bits/stdc++.h>
#include "FenwickTree.h"

using namespace std;
/**
 * @brief  main function.    
 */
int main( void )
{
	long a[] = {5, 4, 1, -1, 0, 8, 7};
	long n  = sizeof(a)/sizeof(a[0]);
	
	FenwickTree fenwick(n);
	for(long i = 0; i < n; ++i) fenwick.update(i, a[i]);
	for(long i = 0; i < n; ++i) printf("%ld\n", fenwick.query(i)); printf("\n");

	a[4] += 2;
	fenwick.update(4, a[4]);
	for(long i = 0; i < n; ++i) printf("%ld\n", fenwick.query(i));	
	return 0;
}
