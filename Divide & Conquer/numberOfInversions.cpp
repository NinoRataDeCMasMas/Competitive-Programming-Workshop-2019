/**
 * @file   numberOfInversions.cpp
 * @date   Mar 23, 2018
 * @brief  Code for the competitive programming workshop.
 */ 
#include <bits/stdc++.h>

using vi  = std::vector<int>;
/**
 * @brief  Naive algorithm.
 */
int naiveInversions(const vi &u, int n) 
{ 
    int I = 0; 
    for(int i = 0; i < n - 1; i++) 
        for(int j = i + 1; j < n; j++) 
            if(u[i] > u[j]) I++; 
    return I; 
} 
/**
 * @brief  Enhance merge algorithm.
 */
int merge(vi &u, int p, int q, int r)
{
    int I = 0, i = 0, j = 0;
    vi L, R;
    L.reserve(q - p + 1); R.reserve(r - q + 1 + 1);
    
    for(int i = p; i <= q; ++i)     L.push_back(u[i]);
    for(int j = q + 1; j <= r; ++j) R.push_back(u[j]);
    
    R.push_back(std::numeric_limits<int>::max());
    L.push_back(std::numeric_limits<int>::max());
    
    for(int k = p; k <= r; ++k)    
        if(L[i] > R[j])
        {
            u[k] = R[j++];
            I += q - p + 1 - i;        
        }
        else
            u[k] = L[i++];
        
        return I;
}
/**
 * @brief  Enhance mergesort algorithm.
 */
int mergesort(vi &u, int p, int r)
{
    int I = 0;
    if(p < r)
    {
        int q = (p + r)/2;
        I  = mergesort(u, p, q);
        I += mergesort(u, q + 1, r);
        I += merge(u,  p, q, r);
    }
    return I;
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
    
    std::cout << mergesort(u, 0, n - 1) << std::endl;
    return 0;
}
