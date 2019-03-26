/**
 * @file   mergesort.cpp
 * @date   Mar 22, 2018
 * @brief  Code for the competitive programming workshop.
 */ 
#include <bits/stdc++.h>

using vi  = std::vector<int>;
/**
 * @brief  Merge algorithm with sentinels.
 */
void merge(vi &u, int p, int q, int r)
{
    vi L, R;
    L.reserve(q - p + 1); R.reserve(r - q + 1 + 1);
    
    for(int i = p; i <= q; ++i)     L.push_back(u[i]); // L = u[p..q]
    for(int j = q + 1; j <= r; ++j) R.push_back(u[j]); // R = u[q + 1..r]
    
    R.push_back(std::numeric_limits<int>::max()); // sentinel for R
    L.push_back(std::numeric_limits<int>::max()); // sentinel for L
    
    int i = 0, j = 0;
    for(int k = p; k <= r; ++k)
        u[k] = (L[i] <= R[j]) ? L[i++] : R[j++];
}
/**
 * @brief  Mergesort algorithm.
 */
void mergesort(vi &u, int p, int r)
{   
    if(p < r)
    {
        int q = (p + r)/2;      // D(n)
        mergesort(u, p, q);     // aT(n/b)
        mergesort(u, q + 1, r); //
        merge(u, p, q, r);      // C(n)
    }
}   
/**
 * @brief  Main function.
 */
int main( void )
{
    int n = 0;
    std::cin >> n;

    vi u(n);
    for(int i = 0; i < n; ++i) std::cin >> u[i];
    mergesort(u, 0, n - 1);

    for(auto i: u) std::cout << i << ' '; std::cout << std::endl;
    return 0;
}
