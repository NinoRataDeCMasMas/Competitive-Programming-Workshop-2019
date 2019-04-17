/**
 * @file   vectorSum.cpp
 * @date   Abr 12, 2018
 * @brief  Preparation for #GranPremioMX2019.
 * @url    https://omegaup.com/arena/problem/Suma-de-vectores#problems
 */
#include <cstdio>

int main( void )
{
    int n = 0;
    scanf("%i", &n);
    
    auto* u = new int[n];
    auto* v = new int[n];
    
    for(int i = 0; i < n; ++i) scanf("%i", &u[i]);
    for(int i = 0; i < n; ++i) scanf("%i", &v[i]);
    
    for(int i = 0; i < n; ++i)
    {
        u[i] += v[i];
        printf("%i ", u[i]);
    }
    printf("\n");
    return 0;
}
