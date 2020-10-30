#include<stdio.h>

int main(){
	
	int T_case = 1 ; 
	int div_y , div_x ;
	int y , x ;
	
	while( T_case != 0 )
	{
		scanf("%d",&T_case);
		scanf("%d %d",&div_x ,&div_y);
		
		for( int i = 0 ; i < T_case ; i++ )
		{
			scanf("%d %d",&x ,&y);
			
			if( x > div_x && y > div_y )
			{
				puts("NE");	
			}
			
			else if ( x > div_x && y < div_y)
			{
				puts("SE");
			}
			
			else if ( x < div_x && y < div_y)
			{
				puts("SO");
			}
			
			else if ( x < div_x && y > div_y)
			{
				puts("NO");
			}
			
			else 
			{
				puts("divisa");
			}
		}	
	}
	
	return 0 ; 
}