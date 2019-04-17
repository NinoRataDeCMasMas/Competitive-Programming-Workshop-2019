/**
 * @file   oddOrEven.cpp
 * @date   Abr 12, 2018
 * @brief  Preparation for #GranPremioMX2019.
 * @url    https://omegaup.com/arena/problem/Pares-e-impares#problems
 */
#include <cstdio>

int main( void )
{
    int n = 0, odd = 0, even = 0;
    scanf("%i", &n);
 
    for(int i = 0; i < n; ++i)
    {
        int x = 0;
        scanf("%i", &x);
        if(x%2 == 0) even++; else odd++;
    } 
    
    printf("%i %i\n", even, odd);
    return 0;
}
