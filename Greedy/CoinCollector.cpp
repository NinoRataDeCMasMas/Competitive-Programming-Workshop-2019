/**
 * @file   CoinCollector.cpp
 * @date   Mar 16, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using vi  = std::vector<int>;
/**
 * @brief  Greedy withdraw.
 */
int withdraw( const vi &coins )
{
    int money = 1;
    int maxCoins = coins.size() > 1 ? 2 : 1;

    for(int i = 1; i < coins.size() - 1; ++i)
        if(money + coins[i] < coins[i + 1])
        {
            money += coins[i];
            maxCoins += 1;
        }
    return maxCoins;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int T = 0;
    std::cin >> T;

    while(T--)
    {
        vi coins; int n = 0;
        std::cin >> n;
        coins.reserve(n);
        
        while(n--)
        {
            int x = 0;
            std::cin >>  x;
            coins.push_back(x);
        }
        std::cout << withdraw(coins) << std::endl;
    }
    return 0;
}


