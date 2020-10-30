#include<stdio.h>

int main(){
	
	int T ;
	
	scanf("%d",&T);
	
	for ( int i = 0 ; i < T ; i++ )
	{
		int total ; 
		int max = 0 ; 
		scanf("%d",&total);
		
		for( int j = 0 ; j < total ; j++ )
		{
			int Temp ; 
			
			scanf("%d",&Temp);
			
			if(max < Temp)
			{
				max = Temp ;
			}
		}
		printf("Case %d: %d\n",i+1,max);
	}	
	return 0 ; 
}