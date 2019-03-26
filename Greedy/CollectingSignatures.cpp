/**
 * @file   CollectingSignatures.cpp
 * @date   Mar 20, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using ii  = std::pair<int, int>;
using vi  = std::vector<int>;
using vii = std::vector<ii>;
/**
 * @brief  Greedy way to obtain the optimal points.
 */
vi optimalPoints( vii &segments )
{
    std::sort(segments.begin(), segments.end(), [](auto &x, auto &y) -> bool
    {
        return x.second < y.second;
    });
    
    vi points; points.reserve(segments.size());
    int point = segments[0].second;
    points.push_back(point);

    for(int i = 1; i < segments.size( ); ++i)
        if(point < segments[i].first || point > segments[i].second)
        {
            point = segments[i].second;
            points.push_back(point);
        }
        
    return points;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int n = 0;
    std::cin >> n;
    
    vii segments;
    segments.reserve(n);
    
    for( int i = 0; i < n; ++i )
    {
        int l = 0, r = 0;
        std::cin >> l >> r;
        segments.push_back(std::make_pair(l,r));
    }
    
    vi points = optimalPoints(segments);
    
    std::cout << points.size( ) << ' ';
    for(auto i: points) std::cout << i << ' ';
    std::cout << std::endl;    
    
    return 0;
}


