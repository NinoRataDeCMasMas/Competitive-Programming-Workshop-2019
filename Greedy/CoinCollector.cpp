/**
 * @file   CoinCollector.cpp
 * @date   Mar 16, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using namespace std;
/**
 * @brief  Greedy withdraw.
 *
 * withdraw(X):
 *      if(X == 0) return;
 *      Let Y be the highest valued coin that does not exceed X.
 *      Give the customer Y valued coin.
 *      withdraw(X - Y);
 */
int maximumCoins( const vector<int> &coins )
{
    int sum = 1;
    int maxCoins = coins.size() > 1 ? 2 : 1;

    for(int i = 1; i < coins.size() - 1; ++i)
    {
        if(sum + coins[i] < coins[i + 1])
        {
            sum += coins[i];
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
        cout << maximumCoins(coins) << endl;
	}

	return 0;
}