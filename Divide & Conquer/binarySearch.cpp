/**
 * @file   binarySearch.cpp
 * @date   Jul 25, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
/**
 * @brief  Binary search algorithm.
 */
int binarySearch( vi A, int low, int high, int key )
{
    if(high < low) return -1;

    int mid = low + (high - low)/2;

    if(key == A[mid])
        return mid;

    else if(key < A[mid])
        return binarySearch(A, low, mid - 1, key);
    else
        return binarySearch(A, mid + 1, high, key);
}
/**
 * @brief  Binary search iterative algorithm.
 */
int itBinarySearch( vi A, int low, int high, int key )
{
    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(key == A[mid]) return mid;

        else if(key < A[mid])
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

    cin >> n;
    vi  A(n);
    for(int i = 0; i < A.size( ); ++i) cin >> A[i];

    cin >> n;
    vi  X(n);
    for(int i = 0; i < X.size( ); ++i) cin >> X[i];

    long N = 0;
    for(int i = 0; i < X.size( ); ++i)
    {
        int idx = itBinarySearch(A, 0, A.size( )-1, X[i]);
        N = (idx == -1) ? N : N + 1;	
    }
    cout << N << endl;
    return 0;
} 
