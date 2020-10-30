#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
vector<pair<double, ii> > EdgeList;
vi pset(1000);

int _size;
int x[1000], y[1000];

int getSize() 
{
    return _size;
}

int findSet(int i) 
{
    return pset[i] == i ? i : (pset[i] = findSet(pset[i]));
}

bool isSameSet(int i, int j) 
{
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j) 
{
    if (!isSameSet(i, j)) 
	{
        pset[findSet(i)] = findSet(j);
        _size--;
    }
}

void initSet(int N) 
{
    for ( int i = 0 ; i < N ; i++ )
    {
        pset[i] = i;
	}
    _size = N;
}
 
int main() {
	
    int Tcase = 0 , Satelit , Post;
    
	scanf("%d", &Tcase);
    
    for( int i = 0 ; i < Tcase ; i++)
    {
        double Hasil = 0.0;
        
        EdgeList.clear();
        
        scanf("%d %d", &Satelit, &Post);
        
        for (int i = 0 ; i < Post ; i++) 
		{
            scanf("%d %d", &x[i], &y[i]);
        }
 
        for (int i = 0 ; i < Post ; i++ )
        {
        	for (int j = i + 1 ; j < Post ; j++) 
			{
                double dist = hypot((double)x[i]-x[j], (double)y[i]-y[j]);
                EdgeList.push_back(make_pair(dist, ii(i, j)));
            }
		}
            
        sort(EdgeList.begin(), EdgeList.end());
        initSet(Post);
        
        for (int i=0 ; getSize() > Satelit ; i++) 
		{
            pair<double, ii> front = EdgeList[i];
            
			if (!isSameSet(front.second.first, front.second.second)) 
			{
                Hasil = max(Hasil, front.first);
                unionSet(front.second.first, front.second.second);
            }
        }
 
        printf("%.2lf\n", Hasil);
    }
}