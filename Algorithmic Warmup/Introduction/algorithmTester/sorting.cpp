/**
 * @file   sorting.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
#include "FileReader.hpp"

using vi = std::vector<int>; 
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
int main( )
{
    FileReader reader;
    vi file = reader("file.csv");
    
    int product = maxPairwiseSorting(file); 
    std::cout <<  product  <<  std::endl;
    
    return 0;
}

