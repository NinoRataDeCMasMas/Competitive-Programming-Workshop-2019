/**
 * @file   maxConsecutiveSums.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */

#ifndef _FILE_READER_HPP
#define _FILE_READER_HPP

#include <bits/stdc++.h>

struct FileReader
{
    std::vector<int> operator( )( std::string nameFile )
    {
        std::vector<int> data;
        std::ifstream file;
        std::string line;

        file.open(nameFile.c_str( ));

        if(file.is_open( ))
            while(getline(file,line))
                data.push_back(atoi(line.c_str( )));
        return data;
    }
};

#endif

