#include <bits/stdc++.h>

using namespace std;

int A[302][302], R[302][302];

int main( void )
{
	int r = 0, c = 0;
	cin >> r >> c;
	
	for(int i = 1; i <= r; ++i)
		for(int j = 1; j <= c; ++j) cin >> A[i][j];
	
	for(int i = 1; i <= r; ++i)
		for(int j = 1; j <= c; ++j)
			if(A[i][j] == 0) R[i][j] = R[i][j - 1] + 1;
	
	int ans = 0;
	for(int j = 1; j <= c; ++j)
	{
		for(int i = 1; i <= r; ++i)
		{
			if(R[i][j] == 0) continue;
			
			int ext = 1, aux = i;

			while(R[--aux][j] >= R[i][j]) ext++;
			aux = i;
			while(R[++aux][j] >= R[i][j]) ext++;

			ans = max(ans, 2 * (R[i][j] + ext));
		}
	}
	cout << ans << endl;
	return 0;
}
