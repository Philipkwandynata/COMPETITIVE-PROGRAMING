#include<stdio.h>

int main(){
	
	int T_case ; 
	int num1 , num2 , num3 ;
	
	scanf("%d",&T_case);
	
	for( int i = 0 ; i < T_case ; i++ )
	{
		scanf("%d %d %d",&num1 ,&num2 ,&num3);
		
		if( num1 > num2 && num1 < num3)
		{
			printf("Case %d: %d\n",i+1 , num1);
		}
		
		else if( num1 < num2 && num1 > num3 )
		{
			printf("Case %d: %d\n",i+1 , num1);
		}
		
		else if( num2 > num1 && num2 < num3)
		{
			printf("Case %d: %d\n",i+1 , num2);
		}
		
		else if( num2 < num1 && num2 > num3 )
		{
			printf("Case %d: %d\n",i+1 , num2);
		}
		
		else 
		{
			printf("Case %d: %d\n",i+1 , num3);
		}
	}	
	return 0 ;
}