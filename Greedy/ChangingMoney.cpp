/**
 * @file   ChangingMoney.cpp
 * @date   Jul 4, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief  Greedy way.
 */
int greedyChange( int money )
{
    int i = 0, change = 0, coins[3] = {10, 5, 1};

    while(money > 0)
        while(i < 3)
            if(coins[i] > money)
                ++i;
            else
            {
                money -= coins[i];
                change += 1;
            }
    return change;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int money = 0;
    std::cin >> money;
    std::cout << greedyChange(money) << std::endl;
    return 0;
}



