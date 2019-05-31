#include <bits/stdc++.h>

using namespace std;

int main( void )
{
	int N, M, T, t, r;
	cin >> N >> M >> T >> t >> r;
	if(t > T){
		cout << "-1" << endl;
		return 0;
	}
	int total = 0;
	int currentTiredness = 0;
	while(M > 0){
		if(total > N){
			cout << "-1" << endl;
			return 0;
		}
		if(currentTiredness + t <= T){
			M--;
			currentTiredness += t;
			total++;
		} else {
			currentTiredness -= r;
			if(currentTiredness < 0)
				currentTiredness = 0;
			total++;
		}
	}
	cout << total << endl;
	
	return 0;
}
