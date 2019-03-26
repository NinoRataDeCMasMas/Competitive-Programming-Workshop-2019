/**
 * @file   DragonOfLoowater.cpp
 * @date   Mar 19, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief  Main function.
 */
int main( void )
{
    int n, m, dragon[20000], knight[20000];

    while(true)
    {
        std::cin >> n >> m;
        if(n == 0) break;
        for(int i = 0; i < n; ++i) std::cin >> dragon[i];
        for(int i = 0; i < m; ++i) std::cin >> knight[i];

        // array dragon + knight are sorted in non decreasing order
        std::sort(dragon, dragon + n);
        std::sort(knight, knight + m);

        // Greedy selection of knights.
        int gold = 0, d = 0, k = 0;

        while(d < n && k < m)   // still have dragon heads or knights
        {
            while(dragon[d] > knight[k] && k < m) k++; // find the required knight
            if(k == m) break;   // no knight can kill this dragon head, doomed :s
            gold += knight[k];  // the king pay this amount of gold
            d++; k++;           // next dragon head and knight please
        }

        if(d == n) std::cout << gold << std::endl; // all dragon heads are chopped
        else puts("Loowater is doomed!");
    }
    return 0;
}


