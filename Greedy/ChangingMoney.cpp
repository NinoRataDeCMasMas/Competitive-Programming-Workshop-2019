/**
 * @file   ChangingMoney.cpp
 * @date   Jul 4, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Greedy way.
 */
int greedyChange( int money )
{
    int i = 0, change = 0;
    
    vector<int> coins{10, 5, 1};

    while(money > 0)
        while(i < coins.size( ))
        {
            if(coins[i] > money)
                ++i;
            else
            {
                money -= coins[i];
                change += 1;
            }
        }
        
    return change;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int money = 0;
    cin >>  money;
    cout << greedyChange(money) << endl;
    return 0;
}



