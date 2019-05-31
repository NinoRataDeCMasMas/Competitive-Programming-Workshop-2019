/**
 * @file   sieveOfEratosthenes.cpp
 * @date   May 14, 2019
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using ull = unsigned long long int;
using vi  =  std::vector<ull>;
using vb  = std::vector<bool>;
/**
 * @brief Find the n prime numbers in O(nlg(lgn)).
 * @param n: n numbers to search
 * @param primes: list of prime numbers 
 */
void simpleSieve( ull n, vi& primes )
{
	bool isPrime[n + 1];

	isPrime[0] = isPrime[1] = false;
	for(ull i = 2; i <= n; ++i) isPrime[i] = true;

	for(ull i = 2; i*i <= n; ++i)
		if(isPrime[i])
			for(int j = i*i; j <= n; j += i)
				isPrime[j] = false;

	for(ull i = 2; i <= n; ++i) if(isPrime[i]) primes.push_back(i);
}

void segmentedSieve( ull m, ull n )
{
	const ull s = 100000000;
	ull N = std::sqrt(n);

	vi primes;
	primes.reserve(N + 1);
   
	simpleSieve(N, primes);
	
	vb block(s);
	for(ull k = 0; k*s <= n; ++k)
	{
		std::fill(block.begin(), block.end(), true);
		ull start = k*s;

		for(auto p: _primes)
		{
			ull i = (k*s + p - 1) / p;
			ull j = std::max(i, p)*p - k*s;
			
			for(; j < s; j += p) block[j] = false;
		}
		if(k = 0) block[0] = block[1] = false;

		for(ull i = m; i < s && k*s + i <= n; ++i) if(block[i]) printf("%llu ", i);
	}
}
/**
 * @brief Main function.
 */
int main( void )
{
	ull n = 0, m = 0;
	scanf("%llu %llu", &m, &n);
	segmentedSieve(m, n);
	return 0;
}
