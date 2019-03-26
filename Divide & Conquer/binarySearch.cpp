/**
 * @file   binarySearch.cpp
 * @date   Jul 25, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using vi  = std::vector<int>;
/**
 * @brief  Binary search algorithm.
 */
int binarySearch(const vi &u, int low, int high, int key)
{
    if(high < low) return -1;

    int mid = low + (high - low)/2;

    if(key == u[mid])
        return mid;

    else if(key < u[mid])
        return binarySearch(u, low, mid - 1, key);
    else
        return binarySearch(u, mid + 1, high, key);
}
/**
 * @brief  Binary search iterative algorithm.
 */
int itBinarySearch(const vi &u, int low, int high, int key)
{
    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(key == u[mid]) return mid;

        else if(key < u[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int n = 0;
    std::cin >> n;
    
    vi u(n);
    for(int i = 0; i < u.size( ); ++i) std::cin >> u[i];

    std::cin >> n;
    vi  x(n);
    for(int i = 0; i < x.size( ); ++i) std::cin >> x[i];

    long N = 0;
    for(int i = 0; i < x.size( ); ++i)
    {
        int idx = itBinarySearch(u, 0, u.size( ) - 1, x[i]);
        N = (idx == -1) ? idx : idx + 1;
        std::cout << N << ' ';
    }
    std::cout << std::endl;
    return 0;
} 
