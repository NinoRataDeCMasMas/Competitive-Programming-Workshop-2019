#include <bits/stdc++.h>

using namespace std;

long Q[1000002];

long getU(int i)
{
	return Q[i+1] - Q[i-1];	
}

int main( void )
{
	long n = 0;
	cin   >> n;
	long  A[n];
	for(int i = 0; i < n; ++i) cin >> A[i];
	
	long v = 0, u = 0, ans = 0;
	reverse(A, A + n);
	
	for(int i = 1; i < n; ++i)
	{
		u = getU(A[i-1]);
		Q[A[i-1]] += 1;
		v += u + i*(A[i-1] - A[i]);
		u  = getU(A[i]); 
		v -= u;
		ans += v;
	}
	
	cout << ans << endl;
	return 0;
}
