#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

int main( void )
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;
		arr[aux]++;
	}
	unsigned long long int r=1;
	for(int i=1; i<=100000; i++){
		if(i > r){
			cout << r << endl;
			return 0;
		} else {
			unsigned long long int aux = i * arr[i];
			r += aux;
		}
	}
	cout << r << endl;
	return 0;
}
