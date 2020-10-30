#include<stdio.h>

int main()
{
	
	int Tcase = 0 ;
	int Tcases = 0 ;
	
	do{
		int count = 0 ;
		
		scanf("%d",&Tcase);
		
		for( int i = 0 ; i <Tcase ; i++ )
		{
			int a = 0 ; 
			scanf("%d",&a);
			
			if(a == 0 )
			{
				count-- ;
			}
			
			if( a > 0 )
			{
				count++ ;
			}
		}
		
		Tcases++;
		
		if(Tcase!= 0 )
		{
			printf("Case %d: %d\n",Tcases,count);
		}
	
	}while(Tcase!= 0 );
	
	return 0 ;
}