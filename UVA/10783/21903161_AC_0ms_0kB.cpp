#include<stdio.h>

int main(){
	
	int T = 0 ;
	
	scanf("%d",&T);
	
	for( int i = 0 ; i < T ; i++)
	{
		int a , b ;
		int total = 0 ;
		
		scanf("%d %d",&a,&b);
		
		if(a % 2 == 0 ){
			a= a+1 ;
		}
		
		if(b%2 == 0){
			b= b-1 ; 
		}
		
		for( int j = a ; j <= b ; j+=2)
		{
			total = total + j ; 
		}
		
		printf("Case %d: %d\n",i+1,total);
	}
	
	
	return 0 ;
}
