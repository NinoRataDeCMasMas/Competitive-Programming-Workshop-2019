/**
 * @file   DisjointSet.h
 * @date   May 7, 2018
 * @brief  Preparation for #GranPremioMX2019.
 * @url    https://es.wikipedia.org/wiki/Estructura_de_datos_para_conjuntos_disjuntos
 */
#ifndef DISJOINT_SET_H
#define DISJOINT_SET_H

#include <bits/stdc++.h>
/**
 * @brief  Disjoint set class.
 */
class DisjointSet
{
	long  *p, *h; // p for parent and h for lenght
	long   n,  m; // n for size and m for number of subsets

	/**
	 *  @brief  Default ctor.
	 *  @param  i: a set
	 *  @return the set that represents the subset 
	 */
	long find(long i)
	{
		if(p[i] == i) return i;
		else          return p[i] = find(p[i]);
	}

public:
	/**
	 *  @brief Default ctor.
	 *  @param n: length of the disjoint set arrays
	 */
	DisjointSet(long n): n(n), m(n)
	{
		n += 1;
		p = new long[n];
		h = new long[n];
	}
	
	/**
	 *  @brief Default destructor.
	 */
	~DisjointSet()
	{
		delete[] p;
		delete[] h;
	}
	
	/**
	 *  @brief Adding a set in the array.
	 *  @param n: length of the disjoint set arrays
	 */
	void createSet(long i)
	{
		p[i] = i; // the set is attached to itself
		h[i] = 0; // the length in the tree is 0
	}
	
	/**
	 *  @brief Join two subsets in a same set.
	 *  @param i, j: a subsets
	 */
	void join(long i, long j)
	{
		long pi = find(i);
		long pj = find(j);

		if(pi != pj)
		{
			if(h[pi] < h[pj])      p[pi] = pj;
			else if(h[pi] > h[pj]) p[pj] = pi;
			else
			{
				p[pj] = pi;
				h[pi] = h[pi] + 1;
			}
			m -= 1;
		}
	}
	
	/**
	 *  @brief  Check if two subsets are together.
	 *  @param  i, j: a subsets
	 *  @return subsets are together
	 */	
	bool areTogether(long i, long j)
	{
		return find(i) == find(j);
	}

	/**
	 *  @brief  Return number of subsets in array.
	 *  @return number of subsets
	 */		
	long numOfSubseq( void )
	{
		return m;
	}
};

#endif
