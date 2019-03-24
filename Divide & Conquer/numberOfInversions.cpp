/**
 * @file   numberOfInversions.cpp
 * @date   Mar 23, 2018
 * @brief  Code for the competitive programming workshop.
 */ 
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
/**
 * @brief  Naive algorithm.
 */
int naiveInversions(vi &u, int n) 
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
    int I = 0;
    vi  L,  R;

    for(int i = p; i <= q; ++i) L.push_back(u[i]);
    L.push_back(std::numeric_limits<int>::max());
    
    for(int j = q + 1; j <= r; ++j) R.push_back(u[j]);
    R.push_back(std::numeric_limits<int>::max());
    
    int i = 0, j = 0;
    for(int k = p; k <= r; ++k)
        if(L[i] <= R[j])
        {
            u[k] = L[i++];
        }
        else
        {
            u[k] = R[j++];
            I += q - p + 1 - i;
        }
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
    cin  >> n;

    vi u(n);
    for(int i = 0; i < n; ++i) cin >> u[i];

    cout << mergesort(u, 0, n - 1) << endl;
    return 0;
}
