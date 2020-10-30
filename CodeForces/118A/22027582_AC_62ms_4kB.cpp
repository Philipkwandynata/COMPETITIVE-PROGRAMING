#include<stdio.h>
#include<string.h>

int main(){
	
	char a[200];
	scanf("%s",a);
	
	for ( int i = 0; a[i]!='\0'; i++) 
	{
		if( a[i] >= 'A' && a[i] <= 'Z') 
	  	{
        	a[i] = a[i] + 32;
      	}	
   	}
	
	for( int i = 0 ; i < strlen(a) ; i++)
	{
		if( a[i] == 'a' || a[i] == 'o' || a[i] == 'y' || a[i] == 'e' || a[i] == 'u' || a[i] == 'i' )
		{
			continue ;
		}
		printf(".%c",a[i]);
	}
	printf("\n");
	
	return 0;
}
