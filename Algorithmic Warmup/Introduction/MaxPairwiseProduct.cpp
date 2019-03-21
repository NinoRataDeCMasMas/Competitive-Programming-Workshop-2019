/**
 * @file   MaxPairwiseProduct.cpp
 * @date   May 23, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Naive maximun pairwise product.
 */
vector<unsigned long> M;

unsigned long maxPairwise( void )
{
    unsigned long m = 0;
        for(unsigned int i = 0; i < M.size( ); ++i)
            for(unsigned int j = 0; j < M.size( ); ++j)
                if(i != j)
                    if(M[i]*M[j] > 0)
                        m = M[i]*M[j];
    return m;
}
/**
 * @brief  Faster maximun pairwise product by sorting.
 */
unsigned long maxPairwiseSorting( void )
{
    unsigned int n = M.size( ) - 1;
    sort(M.begin( ), M.end( ));
    return M[n - 1]*M[n];
}
/**
 * @brief  Main function.
 */
int main( void )
{
    unsigned int  n;
    unsigned long a; 
    cin >> n;

    while(n--)
    {
        cin >> a;
        M.push_back(a);
    }

    cout << maxPairwiseSorting( ) << endl;
    return 0;
}
