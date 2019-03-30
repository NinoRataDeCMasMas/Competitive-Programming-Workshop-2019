/**
 * @file   linear.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
#include "FileReader.hpp"

using vi = std::vector<int>; 
/**
 * @brief  Main function.
 */
int main( )
{
    FileReader reader;
    vi file = reader("file.csv");
    
    int first = 0, second = 0, idx = -1;

    for(int i = 0; i < file.size(); ++i)
        if(file[i] > first)
        {
            first = file[i];
            idx   = i;
        }

    for(int i = 0; i < file.size(); ++i)
        if(i != idx)
            second = std::max(second, file[i]);
        
    std::cout << first*second << std::endl;    
    return 0;
}

