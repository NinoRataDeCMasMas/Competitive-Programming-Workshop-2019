/**
 * @file   CoinCollector.cpp
 * @date   Mar 16, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Greedy withdraw.
 */
int withdraw( const vector<int> &coins )
{
    int money = 1;
    int maxCoins = coins.size() > 1 ? 2 : 1;

    for(int i = 1; i < coins.size() - 1; ++i)
    {
        if(money + coins[i] < coins[i + 1])
        {
            money += coins[i];
            maxCoins += 1;
        }
    }
    return maxCoins;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int T = 0;
    cin >>  T;

    while(T--)
    {
        vector<int> coins;
        int n = 0;
        cin >>  n;

        while(n--)
        {
            int x = 0;
            cin >>  x;
            coins.push_back(x);
        }
        cout << withdraw(coins) << endl;
    }

    return 0;
}


