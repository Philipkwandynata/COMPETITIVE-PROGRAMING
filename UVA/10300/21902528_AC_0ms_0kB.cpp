#include<stdio.h>

int main(){
	
	int T = 0 ; 
	
	scanf("%d",&T);
	
	for( int i = 0 ; i < T ; i++ ){
		
		int Tfarm = 0 ;
		int total = 0 ;
		scanf("%d",&Tfarm);
		
		for(int j = 0 ; j < Tfarm ; j++ )
		{
			int a , b , c ; 
			
			scanf("%d %d %d",&a ,&b ,&c);
			
			total = total + (a * c);
		}
		
		printf("%d\n",total);
		
	}
	
	return 0 ;
}