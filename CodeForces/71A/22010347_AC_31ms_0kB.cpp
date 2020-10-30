#include<stdio.h>
#include<string.h>

int main(){
	
	char N[105][105];
	char ANS[105][105];
	int T ; 
	
	scanf("%d",&T);
	
	for( int i = 1 ; i <= T ; i++ )
	{
		getchar(); scanf("%s",N[i]);
	}
	
	for( int j = 1 ; j <= T ; j++)
	{
		int temp = strlen(N[j]);
		
		if( temp > 10 )
		{
			printf("%c%d%c",N[j][0],temp-2,N[j][temp-1]);
			
		}
		
		else
		{
			printf("%s",N[j]);
		} 
		
		if( j != T)
		{
			printf("\n");
		}
	}
		
	return 0 ; 
}