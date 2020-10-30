#include<stdio.h>
#include<string.h>

int main(){

	char name[1000] ;
	 
	int valid = 1 ;
	
	while(gets(name))
	{
		
		for(int i = 0 ; i < strlen(name) ; i++)
		{
			if( name[i] == '"')
			{
				if(valid)
				{
					printf("``");
					valid = 0 ;
				}
				
				else
				{
					printf("''");	
					valid = 1 ; 
				}
			}
			
			else
			{
				printf("%c",name[i]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}