/**
 * @file   chineseChopsticks.cpp
 * @date   Abr 17, 2018
 * @brief  Preparation for #GranPremioMX2019. This algorithm was shared 
 *         by PatitoGordo (https://github.com/PatitoGordo)
 * 
 * @url    https://omegaup.com/arena/problem/Palillos-Chinos/#problems
 */
#include <bits/stdc++.h>
/**
 * @brief  Chopsticks function.
 */
int chopsticks( std::string s, int i )
{
    if(i >= s.length()) return 0; // Condicion de salida

    int aux;
    switch(s[i])
    {
    /*
     * Si s(i) ≡ 1:
     */
    case '1':
        aux = 0;
        for(int k = i; k < s.length(); ++k)
        {
            if(s[k] == '1') aux++;
            else if(s[k] == 'L') return chopsticks(s, k + 1);
            else if(s[k] == 'R') return chopsticks(s, k) + aux;
        }
        return aux;
    /*
     * Si s(i) ≡ L: ignorar la cuenta anterior y empezar desde i + 1
     */
    case 'L':
        return chopsticks(s, i + 1);
    /*
     * Si s(i) ≡ R: Desde i + 1 hasta len(s)...
     */
    case 'R':
        for(int k = i + 1; k < s.length(); k++)
        {
            /*
             * Si s(k) ≡ R: Muevo la referencia para contar desde el ultimo R
             * hasta la primer L encontrada, es decir i = k
             */  
            if(s[k] == 'R') i = k;
            /*
             * Si s(k) ≡ L: Se observa si k - i es par o impar ( condicion para
             * saber si un palillo se queda en pie entre R y L) y se continua la
             * cuenta en k + 1
             */                
            if(s[k] == 'L') return chopsticks(s, k + 1) + ((k - i)%2 ? 0 : 1);
        }
        return 0;
    }
}
/**
 * @brief  Main function.
 */
int main( void )
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cout << chopsticks(s, 0);
}
