#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10];  
	int T = 0 ;
	
	scanf("%d",&T);
	
	for( int i = 0 ; i < T ; i++ )
	{
		getchar();scanf("%s",a);
		
		int count = 0 ;
		
		
		if( strlen(a) == 5)
		{
			printf("3\n");
			continue ; 
		}
		
		else
		{
			if(a[0] == 'o')
			{
				count++ ; 
			}
			
			if( a[1] == 'n')
			{
				count++ ; 
			}
			
			if( a[2] == 'e')
			{
				count++ ; 
			}
		}
		
		if(count > 1 )
		{
			printf("1\n");
		}
		
		else
		{
			printf("2\n");
		}
	}

	return 0 ;
}