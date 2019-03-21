/**
 * @file   CollectingSignatures.cpp
 * @date   Mar 20, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef   vector<int>  vi;
typedef   vector<ii>  vii;
/**
 * @brief  Greedy way to obtain the optimal points.
 */
vi optimalPoints( vii &segments )
{
    sort(segments.begin(), segments.end(), [](auto &x, auto &y) -> bool
    {
        return x.second < y.second;
    });
    
    vi points;
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
    cin >>  n;
    
    vii segments;
    for( int i = 0; i < n; ++i )
    {
        int l = 0, r = 0;
        cin >> l >> r;
        segments.push_back(make_pair(l,r));
    }
    
    vi points = optimalPoints(segments);
    
    cout << points.size( ) << endl;
    for(auto i: points) cout << i << ' '; cout << endl;    
    
    return 0;
}


