#include<stdio.h>
#include<string.h>

int main(){
	
	int count = 1 ;
	int ans = 0 ;
	do {
		char a[200] = {""};
		
		scanf("%[^\n]",a); getchar();
		
		if(!strcmp(a,"#")){
		ans = 1 ; 
		printf("masuk");
		}
		
		if(strcmp(a,"#")){
			
			if(!strcmp(a,"HELLO"))
			{
				printf("Case %d: ENGLISH\n",count);
			}
			
			else if(!strcmp(a,"HOLA"))
			{
				printf("Case %d: SPANISH\n",count);
			}
			
			else if(!strcmp(a,"HALLO"))
			{
				printf("Case %d: GERMAN\n",count);
			}
			
			else if(!strcmp(a,"BONJOUR"))
			{
				printf("Case %d: FRENCH\n",count);
			}
			
			
			else if(!strcmp(a,"CIAO"))
			{
				printf("Case %d: ITALIAN\n",count);
			}
			
			
			else if(!strcmp(a,"ZDRAVSTVUJTE"))
			{
				printf("Case %d: RUSSIAN\n",count);
			}
			
			else
			{
				printf("Case %d: UNKNOWN\n",count);
			}
		}
		count++; 
		
	}while(ans != 1 ); 
	return 0 ;
}