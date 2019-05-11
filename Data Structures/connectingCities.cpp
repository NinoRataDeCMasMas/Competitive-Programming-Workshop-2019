/**
 * @file   connectingCities.cpp
 * @date   May 7, 2018
 * @brief  Preparation for #GranPremioMX2019.
 */

#include <bits/stdc++.h>
#include "DisjointSet.h"

using namespace std;

struct Road
{
	long a, b, cost;
};

bool comp(Road a, Road b)
{
	return a.cost < b.cost;
}

int main( void )
{
	int T = 0;
	scanf("%i", &T);

	while(T--)
	{
		long n = 0;
		scanf("%ld", &n);

		DisjointSet x(n);
		for(long i = 1; i <= n; ++i) x.createSet(i);
		
		long m = 0;
		scanf("%ld", &m);
		
		for(long i = 0; i < m; ++i)
		{
			Road r;
			scanf("%ld %ld %ld", &r.a, &r.b, &r.cost);
			x.join(r.a, r.b);
		}
		
		long l = 0;
		scanf("%ld", &l);

		Road r[l];
		for(long i = 0; i < l; ++i) scanf("%ld %ld %ld", &r[i].a, &r[i].b, &r[i].cost);
		sort(r, r + l, comp);

		if(x.numOfSubseq() == 1)
		{
			printf("Thank you, Goodbye\n");
			continue;
		}

		long totalPrice = 0;
		for(long i = 0; i < l; ++i)
		{
			if(!x.areTogether(r[i].a, r[i].b))
			{
				x.join(r[i].a, r[i].b);
				totalPrice += r[i].cost;
				if(x.numOfSubseq() == 1) break;
			}
		}
		if(x.numOfSubseq() == 1)
			printf("%ld\n", totalPrice);
		else
		        printf("You better hire someone else\n");		
			
	}	
	return 0;
}
/* EOF */
