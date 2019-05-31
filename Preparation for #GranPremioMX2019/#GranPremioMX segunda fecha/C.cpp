#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long int;

const ull b = 1000000007;
/**
 * @brief Iterative exponentiation with mod.
 */
ull power(ull x, ull n, ull m)
{
	ull ans = 1;

	while(n > 0)
	{
		if(n%2 == 1) ans = ans * x % m;
		x = x*x % m;
		n = n/2;
	}

	return ans;
}
/**
 * @brief Main function.
 */
int main( void )
{
	int T = 0;
	cin  >> T;
	
	while(T--)
	{
		ull n = 0;
		cin  >> n;
		cout << 10*power(9, n - 1, b) % b << endl;
	}
	return 0;
}
