/**
 * @file   recursive.cpp
 * @date   Abr 2, 2019
 * @brief  Code for icpc #GranPremioMX2018.
 */
#include <bits/stdc++.h>

using vi = std::vector<int>;
/**
 * @brief Find the maximal wires longitude.
 */
int findMaxLong(const vi& wires, int totalLong, int items)
{
    int r = totalLong/items;
    int s = 0;
    
    for(int i = r; i > 0; --i)
    {
        for(int j = 0; j < wires.size(); ++j) s = s + wires[j]/i;
        if(s == items) return i;
        s = 0;
    }        
}
/**
 * @brief Main function.
 */
int main( void )
{
    int T = 0, totalLong = 0, items = 0;
    std::cin >> T;
    
    while(T--)
    {
        int n = 0;
        std::cin >> n >> items;
        vi wires(n);
        
        for(int i = 0; i < n; ++i)
        {
            std::cin  >> wires[i];
            totalLong += wires[i];
        }
        
        std::cout << findMaxLong(wires, totalLong, items) << std::endl;
    }
    
    return 0;
}
/* EOF */
