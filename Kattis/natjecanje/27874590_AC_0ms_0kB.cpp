#include<stdio.h>
int main(){
	
	int a , b , c , brok , reser ;
	int arr[100] = {0};
	int counter = 0 ; 
	
	scanf("%d %d %d",&a,&b,&c);
	
	for( int i = 0 ; i < a ; i++ )
	{
		arr[i] = 1 ;
	}
	
	for( int i = 0 ; i < b ; i++ )
	{
		scanf("%d",&brok);
		brok--;
		arr[brok] = 0 ;
	}
	
	for( int i = 0 ; i < c ; i++ )
	{
		scanf("%d",&reser);
		reser--;
		arr[reser] = arr[reser]+1 ;
	} 
	
	for( int i = 0 ; i < a ; i++) 
	{
		if( arr[i] == 0)
		{
			if( i == 0 )
			{
				if(arr[i+1] == 2)
				{
					arr[i+1] = 1 ; 
				}
				
				else
				{
					counter++;
				}
			}
			
			else if( i == a-1 )
			{
				if(arr[i-1] == 2)
				{
					arr[i-1] = 1 ; 
				}
				
				else
				{
					counter++;
				}
			}
			
			else
			{
				if(arr[i-1] == 2)
				{
					arr[i-1] = 1 ; 
				}
				
				else if(arr[i+1] == 2)
				{
					arr[i+1] = 1 ; 
				}
				
				else
				{
					counter++;
				}
			}	
		}
	}
	
	printf("%d",counter);
	
	return 0 ;
}