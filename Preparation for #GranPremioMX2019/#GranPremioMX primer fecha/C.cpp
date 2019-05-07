#include <bits/stdc++.h>

using namespace std;
/**
 *  @breaf Road data strutcture represents a edge in graph
 */
struct Road
{
	long i, j;  // city i to city j
	long price; // proce attribute
};
/**
 *  @breaf Sort roads by price
 */
bool comp(Road a, Road b)
{
	return a.price < b.price;
}
/**
 *  @breaf Disjoint set data strutcture and operations
 */
long P[10001], counter;
/**
 *  @breaf Find the source city for city i
 */
long parent(long i)
{
	if(P[i] == i) return i;
	else          return P[i] = parent(P[i]);
}
/**
 *  @breaf Build a way beetwen city i and city j
 */
void join(long i, long j)
{
	long Pi = parent(i);
	long Pj = parent(j);

	if(Pi != Pj)
	{
		P[Pi] = Pj;
		counter -= 1;
	}
}

bool areTogether(long i, long j)
{
	return parent(i) == parent(j);
}

int main( void )
{
	
	long T;
	cin >> T;
	while(T--)
	{
		long n;
		cin >> n;
		counter = n;
		
		for(long i = 1; i <= n; i++) P[i] = i;

		long n1;
		cin >> n1;

		for(long i = 0; i < n1; i++)
		{
			Road r;
			cin >> r.i >> r.j >> r.price;
			join(r.i, r.j);
		}
		
		long n2;
		cin >> n2;
		Road roads[n2];

		for(long i = 0; i < n2; i++)
			cin >> roads[i].i >> roads[i].j >> roads[i].price;
			
		sort(roads, roads + n2, comp);
		
		if(counter == 1)
		{
			cout << "Thank you, Goodbye" << endl;
			continue;
		}
		
		long totalPrice = 0;
		for(long i = 0; i < n2; i++)
		{
			if(!areTogether(roads[i].i, roads[i].j))
			{
				join(roads[i].i, roads[i].j);
				totalPrice += roads[i].price;
				if(counter == 1) break;
			}
		}
		if(counter == 1)
			cout << totalPrice << endl;
		else
			cout << "You better hire someone else" << endl;
	}

	return 0;
}
