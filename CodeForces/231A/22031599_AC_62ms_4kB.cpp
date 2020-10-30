#include<stdio.h>

int main()
{
	int T ;
	
	scanf("%d",&T);
	
	int total = 0 ; 
	
	for(int i = 0 ; i < T ; i++ )
	{
		int temp , count = 0 ; 
		
		for ( int j = 0 ; j < 3 ; j ++ )
		{
			scanf("%d",&temp);
			
			if(temp == 1 )
			{
				count++;
			}
		}
		
		if(count > 1  )
		{
			total++ ;
		}
	}
	
	printf("%d\n",total);
	
	return 0 ;
}