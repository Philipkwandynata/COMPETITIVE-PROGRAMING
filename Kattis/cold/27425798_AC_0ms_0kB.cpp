#include<stdio.h>

int main(){
	
	int Tcase ;
	
	while(scanf("%d",&Tcase)!=EOF)
	{
		int temp , counter = 0 ; 
		
		for( int i = 0 ; i < Tcase ; i++ )
		{
			scanf("%d",&temp);
			if(temp < 0){
				counter++;
			}	
		}
		printf("%d\n",counter);
	}
	
	return 0 ; 
}