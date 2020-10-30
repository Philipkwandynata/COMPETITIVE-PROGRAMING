#include<stdio.h>

int main(){
	
		int T_case ; 
		int number1 ; 
		int number2 ; 
		
		scanf("%d",&T_case);
		
		for(int i = 0 ; i < T_case ; i++)
		{
			scanf("%d %d",&number1 ,&number2);
			
			if(number1 < number2 )
			{
				printf("<\n");
			}
			
			else if(number1 > number2)
			{
				printf(">\n");
			}
			
			else
			{
				printf("=\n");
			}
		}
		
	return 0 ; 
}
