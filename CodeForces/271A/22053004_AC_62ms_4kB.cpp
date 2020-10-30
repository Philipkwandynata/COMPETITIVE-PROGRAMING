#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int year , ACC = 0 ; 
	char a[30]; 
	
	scanf("%d",&year);
	
	do
	{
		int count = 0 ;
		
		year++ ; 
		itoa( year , a , 10 );
		
		
		for(int i = 0 ; i < 3 ; i++)
		{
			for( int j = i+1 ; j < 4 ; j++)
			{
				if(a[i] == a[j])
				{
					count = -1 ;
					break ; 
				}
				
				else
				{
					count++;
				}
			}
			
			if(count == -1)
			{
				break;
			}
			
			else if(count == 6 )
			{
				ACC = 1 ;
			}
		}
		
	}while( ACC == 0 );
	
	printf("%d\n",year);
	
	return 0 ;
}