#include<stdio.h>

int main(){
	
	 int t , total ;
	 int a;
	 
	 scanf("%d",&t);
	 
	 for(int i = 0 ; i < t ; i ++){
	 	
	 	int max = 0 , min = 0 ; 
	 	
	 	scanf("%d",&total);
		
		scanf("%d",&a);
		
		int temp = a ;
		
	 	for ( int j = 1 ; j < total ; j++)
	 	{
	 		scanf("%d",&a);
	 		
	 		if(temp < a)
	 		{
	 			min = min + 1 ;
			}
			
			if(temp > a)
			{
				max = max +1  ;
			}
			
			temp = a ; 
		}
		
		printf("Case %d: %d %d\n",i+1 , min , max );
		
	 }
	
	return 0 ; 
}