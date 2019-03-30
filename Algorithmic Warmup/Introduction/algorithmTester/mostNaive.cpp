/**
 * @file   mostNaive.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
#include "FileReader.hpp"

using vi = std::vector<int>; 
/**
 * @brief  Most naive maximun pairwise product.
 */
int naiveMaxPairwise( const vi &M )
{
    int product = 0;
    int n = M.size( );

        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                if(i != j)
                    if(M[i]*M[j] > product)
                        product = M[i]*M[j];
    return product;
}
/**
 * @brief  Main function.
 */
int main( )
{
    FileReader reader;
    vi file = reader("file.csv");
    
    int product = naiveMaxPairwise(file); 
    std::cout <<  product  <<  std::endl;
    
    return 0;
}

