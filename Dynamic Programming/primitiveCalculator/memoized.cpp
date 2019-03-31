/**
 * @file   recursive.cpp
 * @date   May 29, 2018
 * @brief  Recursive primitive calculator code for
 *         the competitive programming workshop.
 */
#include <bits/stdc++.h>

using vi = std::vector<int>;
/**
 * @brief DP way (Memoization approach).
 */
vi memo; // estructura para guardar
         // los resultados ya calculados.

int _memoizedCalculator( int n )
{
    if(n <= 1) return 0; // condicion base
    if(memo[n] > 0) return memo[n]; // el resultado ha sido calculado

    /**
    * La funcion recursiva se define de igual manera.
    */
    int x = n, y = n, z = n;

    x = _memoizedCalculator(n - 1);
    if(n % 2 == 0) y = _memoizedCalculator(n/2);
    if(n % 3 == 0) z = _memoizedCalculator(n/3);

    /*
     * resultado de la recursion no se regresa como tal,
     * pues primero se almacena en memoria antes de ser
     * pasado como parametro.
     */ 
    memo[n] = 1 + std::min({x, y, z});
    return memo[n];
}

int memoizedCalculator( int n )
{
    memo.resize(n + 1);
    return _memoizedCalculator(n);
}
/**
 * @brief Main function.
 */
int main(int argc, char **argv)
{
    int n = std::atoi(argv[1]);
    std::cout << memoizedCalculator(n) << std::endl;
    return 0;
}
/* EOF */
