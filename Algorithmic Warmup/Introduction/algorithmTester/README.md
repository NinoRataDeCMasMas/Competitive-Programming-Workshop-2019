## Comparando tiempos entre diversos algoritmos para _Max Pairwise Product_

En la presente carpeta se encuentran los cuatro algoritmos presentados en [MaxPairwiseProduct.cpp](https://github.com/NinoRataDeCMasMas/Competitive-Programming-Workshop/blob/master/Algorithmic%20Warmup/Introduction/MaxPairwiseProduct.cpp), cada uno separado en un archivo _.cpp_ compilable. Ademas se agrego una clase [FileReader](https://github.com/NinoRataDeCMasMas/Competitive-Programming-Workshop/blob/master/Algorithmic%20Warmup/Introduction/algorithmTester/FileReader.hpp) para leer archivos _.csv_.

La idea del experimento es que a partir de un archivo (en este caso _file.csv_) generemos un vector lo suficientemente grande para notar la diferencia de tiempo que cada algoritmo toma en encontrar la solucion, que en el ejemplo son 10,000 enteros. Desde la terminal (_linux_) podemos compilar cada programa de la siguiente manera:

```sh

g++ -std=c++14 mostNaive.cpp -o mostNaive
g++ -std=c++14 naive.cpp -o naive
g++ -std=c++14 sorting.cpp -o sorting
g++ -std=c++14 linear.cpp -o linear
```
y al ejecutar cada uno de los programas con ``` time ./<nombreEjecutable>``` podemos observar la diferencia de tiempos que toma cada algoritmo implementado

![](https://github.com/NinoRataDeCMasMas/Competitive-Programming-Workshop/blob/master/Algorithmic%20Warmup/Introduction/algorithmTester/test.png)


