#include<stdio.h>

int main(){
	
	int Tcase = 0 ;
	
	scanf("%d",&Tcase);
	
	for ( int i = 0 ; i < Tcase ; i++ )
	{
		int Tstore = 0 ; 
		
		scanf("%d",&Tstore);
		
		int max = -1 ; 
		int min = 100 ;
		
		for ( int j = 0 ; j < Tstore ; j++ )
		{
			int temp = 0 ; 
			
			scanf("%d",&temp);
			
			if(temp > max)
			{
				max = temp ; 
			}
			
			if( temp < min )
			{
				min = temp ;
			}
		}
		printf("%d\n",(max-min)*2);
	}
	
	return 0 ;
}