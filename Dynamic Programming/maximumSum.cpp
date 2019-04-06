/**
 * @file   maximumSum.cpp
 * @date   Abr 1, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

int A[100][100] = {0}, sum[100][100] = {0};
/**
 * @brief Recurrence relation for maximum rectangle sum.
 */
int maxSum(int i, int j)
{
    if(i < 0 || j < 0) return sum[0][0];
    else
    {
        sum[i][j] = maxSum(i - 1, j) + maxSum(i, j - 1) - maxSum(i - 1, j - 1) + A[i][j];
        return sum[i][j];
    }
}
/**
 * @brief Find the maximum rectangle sum.
 */
void solve( int n )
{
    int s = std::numeric_limits<int>::min();

    for(int i = 0; i < n; i++)
        for(int j =  0; j < n; j++)
            for(int k = i; k < n; k++)
                for(int l = j; l < n; l++)
                    s = std::max(s, sum[k][l] - sum[i-1][l] - sum[k][j-1] + sum[i-1][j-1]);

    std::cout << s << std::endl;
}
/**
 * @brief Main function.
 */
int main(int argc, char **argv)
{
    int n = 0;
    
    std::cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
            // Recurrence relation on DP tabulation
            sum[i][j] = A[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }

    // maxSum(n,n);
    solve(n);
    return 0;
}
/* EOF */
