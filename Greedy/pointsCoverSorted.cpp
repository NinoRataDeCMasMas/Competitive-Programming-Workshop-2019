/**
 * @file   pointsCoverSorted.cpp
 * @date   Mar 20, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using ii  = std::pair<int, int>;
using vi  = std::vector<int>;
using vii = std::vector<ii>;
/**
 * @brief  points cover sorted with greedy algorithm.
 */
vii pointsCoverSorted( const vi &points, int n = 2 )
{
    int left = 0, l = 0, r = 0;
    vii segments;
    segments.reserve(points.size( ));
    
    while(left < points.size( ))
    {
        l = points[left];
        r = points[left] + n;

        segments.push_back(std::make_pair(l,r));
        left += 1;

        while(left < points.size( ) && points[left] <= r)
            left += 1;
    }
    return segments;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    vi U; int n = 0;
    
    while(std::cin.peek( ) != '\n')
    {
        std::cin  >> n;
        U.push_back(n);
    }
    std::sort(U.begin( ), U.end( ));

    for(auto p: pointsCoverSorted(U))
        std::cout << p.first << "," << p.second << std::endl;
    
    return 0;
}

