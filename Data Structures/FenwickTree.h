/**
 * @file   FenwickTree.h
 * @date   May 9, 2018
 * @brief  Preparation for #GranPremioMX2019.    
 */
#ifndef FENWICK_TREE_H
#define FENWICK_TREE_H

#include <bits/stdc++.h>
/**
 * @brief  Fenwick Tree class.
 */
class FenwickTree
{
	// The array z represents a binary indexed tree with n
	// elements where i as an index and parent(i) = i - [i & (-i)].
	// The i & (-i) expression represents the decimal value of
	// last set digit of index i.
	long *z, n;

public:
	/**
	 *  @brief Default ctor.
	 *  @param n: length of the fenwick array
	 */
        FenwickTree(long n): n(n)
	{
		// for convenction the array index starts from 1
		// and initial values are 0
		n += 1; 
		z = new long[n];
		memset(z, 0, n);
	}
	
	/**
	 *  @brief Default destructor.
	 */
	~FenwickTree()
	{
		delete[] z;
	}
	
	/**
	 *  @brief Update the ith value on fenwick array.
	 *  @param i: index of the fenwick array
	 *  @param v: value to update
	 */
	void update(long i, long v)
	{
		// The i += i & (-i) expression indicates
		// the path to update the values in the array
		
		i++; // Adjusting index to use in fenwick tree
		for(; i <= n; i += i & (-i)) z[i] += v;
	}

	/**
	 *  @brief  Query the sum in range [1 .. i]
	 *  @param  i: index of the fenwick array
	 *  @return the sum in renge [1 .. i]
	 */	
	long query(long i)
	{
		// The i -= i & (-i) indicates the sum of nodes
		// from i to node 0
		
		i++; // Adjusting index to use in fenwick tree
		long sum = 0;
		for(; i; i -= i & (-i)) sum += z[i];
		return sum;
	}
};

#endif
