#include<stdio.h>

int main(){
	
	int a , b ; 
	
	scanf("%d %d",&a,&b);
	
	int temp[1120] , count = 0 ; 
	
	
	for( int i = 1 ; i <= a ; i++ )
	{
		scanf("%d",&temp[i]);
	}
	
	if( temp[b] == 0 )
	{
		for(int i = 1 ; i < b ; i++ )
		{
			if( temp[i] > 0 )
			{
				count++ ;
			}
		}
	}
	
	else
	{
		count = b ; 
		
		for(int i = b+1 ; i <= a ; i++  )
		{
			if(temp[i] == temp[b]) 
			{
				count++ ; 
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0 ; 
}