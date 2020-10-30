#include<stdio.h>
#include<string.h>

int main(){
	int up = 0 , down = 0 , both = 0 ;
	char arr[2000];
	
	scanf("%[^\n]",arr);
	
	char temp = arr[0];
	
	for(int i = 1 ; i < strlen(arr) ; i++ )
	{
		if( temp == arr[i] && arr[i] == 'U')
		{
			if(i == 1 )
			{
				down++;
			}
			
			else
			{
				down = down + 2 ;
			}
		}
		
		else if( temp == arr[i] && arr[i] == 'D')
		{
			if(i == 1 )
			{
				up++;
			}
			
			else
			{
				up = up + 2 ;
			}
		}
		
		else
		{
			if(arr[i] == 'U')
			{
				if( i == 1 )
				{
					up++;
					
				}
				both++;
				down = down + 2 ; 
					
			}
			
			else if(arr[i] == 'D')
			{
				if( i == 1 )
				{
					down++;
					
				}
				up = up + 2  ;
				both++;
			}
		}
		
		temp = arr[i];	
	}
	
	printf("%d\n%d\n%d\n",up,down,both);
	
	
	
	return 0 ;
}