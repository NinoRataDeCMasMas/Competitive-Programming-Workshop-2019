/**
 * @file   FiboByExponentiation.cpp
 * @date   Abr 9, 2019
 * @brief  Code for the competitive programming workshop.
 */
#include <bits/stdc++.h>

using Matrix = std::array<std::array<uint64_t,2>,2>;
/**
 * @brief  Matrix 2x2 product algorithm.
 */
Matrix operator*( Matrix& A, Matrix& B )
{
    Matrix C;
    // Schoolbook algorithm
    C[0][0] = A[0][0]*B[0][0] + A[1][0]*B[0][1];
    C[0][1] = A[0][0]*B[1][0] + A[1][0]*B[1][1];
    C[1][0] = A[0][1]*B[0][0] + A[1][1]*B[0][1];
    C[1][1] = A[0][1]*B[1][0] + A[1][1]*B[1][1];

    return C;
}
/**
 * @brief  Matrix 2x2 exponentiation algorithm.
 */
Matrix FiboByExp( Matrix A, uint64_t n )
{
    Matrix ans = {{{1, 0}, {0, 1}}}; // Matriz identidad

    while(n > 0)
    {   
        /*
         * Cada potencia impar multiplicamos al calculo el termino que nos 
         * hace falta. Cuando la potencia llega a ser 1, todo el calculo se
         * resguarda en ans
         */
        if(n%2 == 1) ans = ans * A;
        A = A * A;   // Calculamos el cuadrado de A
        /*
         * obtenemos la siguiente potencia de 2 a calcular. Las potencias
         * impares se obtienen automatica/e por el "casteo" de las variables
         */        
        n = n/2;
    }
    return ans;
}
/**
 * @brief  Main function.
 */
int main( void )
{
    Matrix F  = { {{1, 1}, {1, 0}} }; // Matriz de Fibonacci
    
    int64_t n = 0;
    std::cin >> n;
    std::cout << FiboByExp(F, n)[0][1] << std::endl;
    return 0;
}
/* EOF */
