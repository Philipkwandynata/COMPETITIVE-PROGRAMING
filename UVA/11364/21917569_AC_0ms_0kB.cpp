#include<stdio.h>

int main(){
	
	int T ;
	
	scanf("%d",&T);
	
	for( int i = 0 ; i < T ; i++ ){
		
		int max = 0  , min = 100 ; 
		
		int Tstore ;
		
		scanf("%d",&Tstore);
		
		int temp = 0 ;
		
		for( int j = 0 ; j < Tstore ; j++ )
		{
			
			scanf("%d",&temp);
			
			if ( temp > max ){
				max = temp ; 
			}
			
			if( temp < min ){
				min = temp ;
			}	
			
		}
		printf("%d\n",(max-min)*2);
	}
	return 0 ; 
}