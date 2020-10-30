#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T ; 
	int a[3020] ={0}; 
	
	scanf("%d",&T);
	
	for( int i = 0 ; i < T ; i++)
	{
		int temp ; 
		scanf("%d",&temp);
		
		a[temp] = 1 ; 
	}
	
	for( int i = 1 ; i < 3002 ; i++)
	{
		if( a[i] == 0 )
		{
			printf("%d\n",i);
			break ; 
		}
	}
	
	
	return 0 ;
}