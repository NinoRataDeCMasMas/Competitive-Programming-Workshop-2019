/**
 * @file   naive.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
#include "FileReader.hpp"

using vi = std::vector<int>; 
/**
 * @brief  Naive maximun pairwise product.
 */
int MaxPairwiseProduct( const vi &M )
{
    int product = 0;
    int n = M.size( );
    
    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j)
            product = std::max(product, M[i]*M[j]);
    return product;
}
/**
 * @brief  Main function.
 */
int main( )
{
    FileReader reader;
    vi file = reader("file.csv");
    
    int product = MaxPairwiseProduct(file); 
    std::cout <<  product  <<  std::endl;
    
    return 0;
}

