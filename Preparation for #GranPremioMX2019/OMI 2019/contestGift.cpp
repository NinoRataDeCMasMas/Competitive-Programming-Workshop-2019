/**
 * @file   contestGift.cpp
 * @date   Abr 12, 2018
 * @brief  Preparation for #GranPremioMX2019.
 * @url    https://omegaup.com/arena/problem/Regalo-de-Concurso/#problems
 */
#include <bits/stdc++.h>

using vi = std::vector<int>; 
/**
 * @brief  Main function.
 * @Complexity is O[(m - n)lgm].
 */
int main()
{
    int n = 0, m = 0;
    int diff = std::numeric_limits<int>::max();
    
    std::cin >> n >> m;
    vi matrioshkas(m);
    
    for(auto& g: matrioshkas) std::cin >> g;

    std::sort(matrioshkas.begin(), matrioshkas.end()); 
    
    for(int i = 0; i <= m - n; ++i) // Se hacen m - n selecciones
    {
        auto B = matrioshkas[i];         // valor minimo de la seleccion actual
        auto A = matrioshkas[i + n - 1]; // valor maximo de la seleccion actual
        diff = (A - B) < diff ? A - B : diff; // Encontrar la diferencia minima
    }

    std::cout << diff << std::endl;
    return 0;
}
/* EOF */
