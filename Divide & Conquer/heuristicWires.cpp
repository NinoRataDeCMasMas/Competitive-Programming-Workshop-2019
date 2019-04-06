/**
 * @file   recursive.cpp
 * @date   Abr 2, 2019
 * @brief  Code for icpc #GranPremioMX2018.
 */
#include <bits/stdc++.h>

using vi = std::vector<int>;
/**
 * @brief O(Nn) naive algorithm.
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
 * @brief O(nlgN) fast algorithm.
 */
int isPosible(int x, const vi& wires)
{
    int sum = 0;
    for(int i = 0; i < wires.size(); ++i) sum += wires[i]/x;
    return  sum;
}

int BSMaxLong(const vi& wires, int items)
{
    int low  = 0;
    int high = *std::max_element(wires.begin(), wires.end());
    
    // Binary search implementation
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        
        if(isPosible(mid,wires) == items) return mid;

        else if(isPosible(mid,wires) < items)
            high = mid;
        else
            low  = mid;
    }
    return 0;
}
/**
 * @brief Main function.
 */
int main( void )
{
    // compute totalLong += wires[i];
    int  totalLong  =  0; 
    int T = 0, items = 0;
    std::cin >> T;
    
    while(T--)
    {
        int n = 0;
        std::cin >> n >> items;
        vi wires(n);
        for(int i = 0; i < n; ++i)   std::cin >> wires[i]; 
        std::cout << BSMaxLong(wires, items) << std::endl;
    }
    
    return 0;
}
/* EOF */
