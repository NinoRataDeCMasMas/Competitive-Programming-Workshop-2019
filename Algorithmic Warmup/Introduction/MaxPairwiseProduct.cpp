/**
 * @file   MaxPairwiseProduct.cpp
 * @date   May 23, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using vi = std::vector<int>; 
/**
 * @brief  Naive maximun pairwise product.
 */
int MaxPairwiseProduct( const vi &M )
{
    int product = 0;
    int n = M.size( );
    
    for(int i = 0; i < M.size(); ++i)
        for(int j = i + 1; j < M.size(); ++j)
            product = std::max(product, M[i]*M[j]);
    return product;
}
/**
 * @brief  Faster maximun pairwise product by sorting.
 */
int maxPairwiseSorting( vi &M )
{
    unsigned int n = M.size( ) - 1;

    std::sort(M.begin( ), M.end( ));
    return M[n]*M[n - 1];
}
/**
 * @brief  Main function.
 */
int main( void )
{
    vi M; int n, a; 

    std::cin >> n;
    M.reserve(n);
    
    while(n--)
    {
        std::cin  >> a;
        M.push_back(a);
    }

    int product = maxPairwiseSorting(M); 
    std::cout <<  product  << std::endl;
    return 0;
}
