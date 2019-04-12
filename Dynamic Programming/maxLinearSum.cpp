/**
 * @file   maxLinearSum.cpp
 * @date   Abr 5, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

int A[100][100] = {0}, sum[101][101] = {0};
/**
 * @brief Recurrence relation for path of maximal sum.
 */
int linearSum(int i, int j)
{
    if(i < 0 || j < 0)
        return 0;
    else
        return A[i][j] + std::max(linearSum(i, j - 1), linearSum(i - 1, j));     
}
/**
 * @brief Tabulation method.
 * @complexity is O(nm)
 */
int tabulation(int n, int m)
{
   for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            sum[i][j] = A[i - 1][j - 1] + std::max(sum[i][j - 1], sum[i - 1][j]);
    
    return sum[n][m];
}
/**
 * @brief Main function.
 */
int main( void )
{
    int  n = 0,  m = 0;
    std::cin >> n >> m;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) std::cin >> A[i][j];

    std::cout << tabulation(n, m) << std::endl;    
    return 0;
}
