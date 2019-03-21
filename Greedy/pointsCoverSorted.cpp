/**
 * @file   pointsCoverSorted.cpp
 * @date   Mar 20, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef   vector<int>  vi;
typedef   vector<ii>  vii;
/**
 * @brief  points cover sorted with greedy algorithm.
 */
vii pointsCoverSorted( vi x, int n = 2 )
{
    vii segments;
    int left = 0, l = 0, r = 0;

    while(left < x.size( ))
    {
        l = x[left];
        r = x[left] + n;

        segments.push_back(make_pair(l,r));
        left += 1;

        while(left < x.size( ) && x[left] <= r)
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
    while(cin.peek( ) != '\n')
    {
        cin >> n;
        U.push_back(n);
    }

    sort(U.begin( ), U.end( ));

    for(auto p: pointsCoverSorted(U))
        cout << p.first << ", " << p.second << endl;
    
    return 0;
}

