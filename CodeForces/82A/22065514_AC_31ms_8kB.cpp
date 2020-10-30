#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int numb ;
	scanf("%d",&numb);
	
	int max = 5 ;
	int count = 1 ;
	
	while ( max < numb)
	{
		numb = numb - max ;
		count = count * 2 ;
		max = max * 2 ;
	}
	
	int itung = 1 ;
	
	while( numb > count )
	{
		numb = numb - count ; 
		itung++ ; 
	}
	
	if(itung == 1 )
	{
		printf("Sheldon\n");
	}
	
	else if(itung == 2 )
	{
		printf("Leonard\n");
	}
	
	else if(itung == 3 )
	{
		printf("Penny\n");
	}

	else if(itung == 4 )
	{
		printf("Rajesh\n");
	}
	
	else if(itung == 5 )
	{
		printf("Howard\n");
	}
	
	return 0 ; 
}