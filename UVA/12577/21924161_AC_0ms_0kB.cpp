#include<stdio.h>
#include<string.h>

int main(){
	
	char a[20];
	int count = 1 ; 
	
	do{
		
		scanf("%s",a);getchar();
		
		if(strcmp(a,"Hajj")==0)
		{
			printf("Case %d: Hajj-e-Akbar\n",count++);
		}
		
		else if(strcmp(a,"Umrah")==0)
		{
			printf("Case %d: Hajj-e-Asghar\n",count++);
		}
		
	}while(a[0] != '*');
	
	return 0 ;
}