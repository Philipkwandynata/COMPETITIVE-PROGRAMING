#include<stdio.h>

int main()
{
	int T ;
	
	scanf("%d",&T);
	
	for ( int i = 1 ; i <= T ; i++ )
	{
		int Tscan ;
		
		int arr[20];
		
		scanf("%d",&Tscan);
		
		int temp = Tscan / 2 + 1 ;
		
		for( int j = 1 ; j <= Tscan ; j++ )
		{
			scanf("%d",&arr[j]);
		}
		printf("Case %d: %d\n",i,arr[temp]);
	}	
	
	return 0 ;
}
