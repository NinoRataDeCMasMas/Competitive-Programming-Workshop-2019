/**
 * @file   maxConsecutiveSums.cpp
 * @date   May 28, 2018
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using vi = std::vector<int>;
/**
 * @brief  Main function.
 */
int main( void )
{
    int n, m;
    std::cin >> n >> m;
    
    vi v(n);
    for(int i = 0; i < n; ++i) std::cin >> v[i];

    long sum = 0, prev = 0;
    /*
     * El vector se recorrera hasta v.size( ) - m, puesto que
     * los m elementos restantes se sumaran cuando se halla 
     * llegado a v[v.size( ) - m]
     */  
    for(int i = 0; i <= v.size( ) - m; ++i)
    {
        if(i == 0)
        {
            /*
             * Hacemos la primer suma de los m elementos
             * desde i = 0 hasta i = m
             */
            for(int j = 0; j < m; j++)
                sum += v[j];
            prev = sum;
        }
        else
        {
            /*
            * Sea prev la suma de m elementos ya realizada. Se calcula una
            * nueva suma llamada current, restando el primer elemento que fue sumado, v[i - 1]
            * y sumando el siguiente elemento en el vector, v[i + m - 1]
            */ 
            long current = prev - v[i - 1] + v[i + m - 1];
            sum = std::max(sum, current);
            prev = current;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}
