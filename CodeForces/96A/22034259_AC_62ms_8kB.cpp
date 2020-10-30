#include<stdio.h>
#include<string.h>

int main(){
	
	char a[150];
	
	scanf("%s",a);
	
	int key ;
	
	if( a[0] == '1')
	{
		key = 1 ;
	}
	
	else if( a[0] == '0')
	{
		key = 0 ;
	}
	 
	int count = 1 ;
	
	for(int i = 1 ; i < strlen(a) ; i++ )
	{
		if(a[i] == '1' && key == 1 )
		{
			count++ ;
		}
		
		else if(a[i] == '0' && key == 0)
		{
			count++ ;
		}
		
		else if(a[i] == '0' && key == 1)
		{
			count = 1 ;
			key = 0 ;  
		}
		
		else if(a[i] == '1' && key == 0)
		{
			count = 1 ; 
			key = 1 ;
		}
		
		if(count == 7)
		{
			break ; 
		}
	}
	
	if(count == 7 )
	{
		printf("YES\n");
	}
	
	else
	{
		printf("NO\n");
	}
	
	return 0 ;
}