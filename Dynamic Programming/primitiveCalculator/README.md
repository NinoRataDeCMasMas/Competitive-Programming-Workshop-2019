# La calculadora primitiva

Tenemos a disposición una calculadora primitiva que puede realizar las siguientes 3 operaciones con un número x: multiplicar x por 2, multiplicar x por 3, o sumar 1 a x. Dado un entero positivo n, debemos encnntrar el número mínimo de operaciones necesarias para obtener el número n a partir del número 1.

## Implementación voráz

Pasar de 1 a n es lo mismo que ir de n a 1, cada vez que se divide el número actual por 2 o 3 o se resta 1. Como nos gustaría ir de n a 1 lo más rápido posible, es natural reducir repetidamente n tanto como sea posible. Es decir, en cada paso reemplazamos n por min{n/3, n/2, n - 1} (los términos n/3 y n/2 se usan solo cuando n es divisible por 3 y 2, respectivamente). Hacemos esto hasta que alcanzamos 1. Esto da lugar un algoritmo de naturaleza voráz.

```C++

int greedyCalculator( int n )
{
    int numOps = 0;

    while(n > 1)
    {
        numOps += 1;
        n = (n%3 == 0) ? n/3 : (n%2 == 0) ? n/2 : n - 1;
    }
    return numOps;
}
```
Este algoritmo aparentemente es correcto pero de hecho no lo es. En este caso, pasar de n a min{n/3, n/2, n - 1} no es una elección _segura_.

## Implementación recursiva

En lugar de hacer una elección voraz, decidimos inspeccionar cada una de las posibilidades. Esta estrategia puede implementarse de manera recursiva. Sea ζ una función que devuelva el número mínimo de operaciones solicitadas en el problema. Una posible interpretación recursiva seria la siguiente:


Lo anterior podría representarse en forma de pseudocódigo:

```C++

int recursiveCalculator( int n )
{
    if (n <= 1)
        /*
         *  Si n = 1, el numero  minimo  de
         *  operaciones para llegar a 1 es 0
         */
        return 0;
    else
        /*
         *  Sean: 
         *  x = recursiveCalculator(n - 1)
         *  y = recursiveCalculator(n / 2)
         *  z = recursiveCalculator(n / 3) 
         */
        return 1 + min({x, y, z});
}
```




## Eficiencia respecto a otros paradigmas

```sh

    g++ -std=c++14 greedy.cpp -o greedy
    g++ -std=c++14 recursive.cpp -o recursive
    g++ -std=c++14 memoized.cpp -o memoized
```




