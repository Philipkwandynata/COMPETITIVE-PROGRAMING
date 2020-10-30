#include<stdio.h>

int main(){
	
	FILE *in_file  = fopen("input.txt", "r");
	FILE *out_file = fopen("output.txt", "w");
	int Tcase ;
	
	fscanf(in_file,"%d",&Tcase);
	
	char arr[150];
	
	getchar();fscanf(in_file,"%s",arr);
	
	int a = -1  , b = -1 ; 
	
	int answer = 1 ; 
	
	for( int i = 0 ; i < Tcase ; i ++ )
	{
		if( arr[i] == '0')
		{
			continue;
		}
		
		if( a == -1 && arr[i] == '1')
		{
			a = i ;
		}
		
		else if( b == -1 && arr[i] == '1')
		{
			b = i ;
		}
		
		else
		{
			if( b-a == i-b)
			{
				a = b ; 
				b = i ;	 
			}
			
			else 
			{
				answer = 0 ;
				break ; 
			}
		}
	}
	
	if(answer == 0 )
	{
		fprintf(out_file,"NO\n");
	}
	
	else
	{
		fprintf(out_file,"YES\n");
	}
	
	return 0 ; 
}