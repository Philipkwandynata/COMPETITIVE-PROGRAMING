#include<stdio.h>
#include<string.h>

int main(){
	
	int T = 0 ;
	int Total = 0 ;
	int K = 0 ;
	
	scanf("%d",&T);
	
	for(int i = 0 ; i < T ; i++ ){
		
		char a[10] ; 
			
		getchar();scanf("%s",a);
		
		if(strcmp(a,"donate") == 0 )
		{
			scanf("%d",&K);
			
			Total = Total + K ; 
		}
		
		else
		{
			printf("%d\n",Total);
		}
	}
	
	return 0 ; 
}