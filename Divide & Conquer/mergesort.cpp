/**
 * @file   mergesort.cpp
 * @date   Mar 22, 2018
 * @brief  Code for the competitive programming workshop.
 */ 
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
/**
 * @brief  Merge algorithm with sentinels.
 */
void merge(vi &u, int p, int q, int r)
{
    vi L, R;
    // Copy from subarray u[p..q] with sentinel element
    for(int i = p; i <= q; ++i) L.push_back(u[i]);
    L.push_back(std::numeric_limits<int>::max());
    
    // Copy from subarray u[q+1..r] with sentinel element
    for(int j = q + 1; j <= r; ++j) R.push_back(u[j]);
    R.push_back(std::numeric_limits<int>::max());
    
    // Compare the subarrays and save the result in the array u
    int i = 0, j = 0;
    for(int k = p; k <= r; ++k)
        u[k] = (L[i] <= R[j]) ? L[i++] : R[j++];
}
/**
 * @brief  Mergesort algorithm.
 */
void mergesort(vi &u, int p, int r)
{   
    // We have at least 2 elements in the subarray
    if(p < r)
    {
        // calculate middle of array: D(n)
        int q = (p + r)/2;
        // sort u[p..q] and u[q+1..r]: aT(n/b)
        mergesort(u, p, q);
        mergesort(u, q + 1, r);
        // merge both arrays: C(n)
        merge(u, p, q, r);
    }
}   
/**
 * @brief  Main function.
 */
int main( void )
{
    int n = 0;
    cin  >> n;

    vi u(n);
    for(int i = 0; i < n; ++i) cin >> u[i];

    mergesort(u, 0, n - 1);

    for(auto i: u) cout << i << ' ';
    cout << endl;

    return 0;
}
