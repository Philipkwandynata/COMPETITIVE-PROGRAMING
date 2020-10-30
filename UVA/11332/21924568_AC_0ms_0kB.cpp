#include<stdio.h>

int main(){
	
	int a = 0 , temp = 0 ; 
	
	do{
		scanf("%d",&a);
		
		while( a > 9 || temp > 0 ){
			
			temp = temp + a % 10 ;
			a = a - a % 10 ;
			a = a / 10 ;
			
			if(a == 0 )
			{
				a = temp ; 
				temp = 0 ;
			}
		}
		
		if(a!=0)
		{
			printf("%d\n",a);
		}
		
	}while(a != 0);
	
	return 0 ;
}