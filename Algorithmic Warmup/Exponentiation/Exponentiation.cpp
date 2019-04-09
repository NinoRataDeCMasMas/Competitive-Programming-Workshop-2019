/**
 * @file   Exponentiation.cpp
 * @date   Abr 9, 2019
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>
/**
 * @brief  Recursive exponentiation Algorithm.
 */
uint64_t exp( uint64_t x, uint64_t n )
{
    /*
     * Usamos esta condicion base porque usamos la expresion
     * (n - 1)/2, que podria ser 0
     */
    if(n == 0) return 1;  
    if(n == 1) return x; // Condicion base

    if(n%2 == 1) return x*exp(x*x, (n - 1)/2); // Si la potencia es impar
    return exp(x*x, n/2); // Si la potencia es par
}
/**
 * @brief  Iterative exponentiation Algorithm.
 */
uint64_t itExp( uint64_t x, uint64_t n )
{
    uint64_t ans = 1; // El calculo de nuestro resultado
    
    while( n > 0 )
    {
        /*
         * Cada potencia impar multiplicamos al calculo el termino que nos 
         * hace falta. Cuando la potencia llega a ser 1, todo el calculo se
         * resguarda en ans
         */
        if(n%2 == 1) ans *= x;
        
        x *= x; // Calculamos el cuadrado de x
        /*
         * obtenemos la siguiente potencia de 2 a calcular. Las potencias
         * impares se obtienen automatica/e por el "casteo" de las variables
         */
        n  = n/2;
    }
    return ans;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    uint64_t x, n;
    std::cin >> x >> n;
    std::cout << itExp(x, n) << std::endl;
    return 0;
}
/* EOF */
