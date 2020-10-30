#include<stdio.h>
#include<string.h>

int main(){
	
	char a[120] , b[120] , c[120];
	
	scanf("%s %s",a,b);
	int len = strlen(a);
	
	for( int i = 0 ; i < len ; i++ )
	{
		if( a[i] == '1' && b[i] == '1' || a[i] == '0' && b[i] == '0')
		{
			c[i] = '0' ;
		}
		
		else if( a[i] == '1' && b[i] == '0' || a[i] == '0' && b[i] == '1' )
		{
			c[i] = '1' ;
		}
	}
	
	c[len] = '\0' ; 
	
	printf("%s\n",c);
	
	return 0 ;
}