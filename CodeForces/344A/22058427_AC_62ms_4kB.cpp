#include<stdio.h>
int main(){
	
	int Tcase ;
	
	scanf("%d",&Tcase);
	
	int temp , count = 1 ; 
	
	for(int i = 0 ; i < Tcase ; i++ )
	{
		char a[5];
		getchar();scanf("%s",a);
		
		if(  i == 0 )
		{
			if( a[0] == '1')
			{
				temp = 1 ;
			}
			
			else
			{
				temp = 0 ;
			}
		}
		
		else
		{
			if( temp == 1 && a[0] == '0')
			{
				count++;
				temp = 0 ;
			}
			
			else if( temp == 0 && a[0] == '1')
			{
				count++;
				temp = 1 ;
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0 ;
}