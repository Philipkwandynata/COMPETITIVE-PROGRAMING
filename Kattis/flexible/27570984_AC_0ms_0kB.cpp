#include<stdio.h>

int main(){
	
	int w , t ;
	
	scanf("%d %d",&w,&t);
	
	int arr[150] = {0} ; 
	int answer[150] = {0};
	
	arr[t+1] = w ; 
	
	for( int i = 1 ; i <= t ; i++ ){
		
		scanf("%d",&arr[i]);
		
	}
	
	for( int i = 0 ; i <= t ; i++ )
	{
		for( int j = i+1 ; j <= t+1 ; j++ )
		{
			answer[arr[j]-arr[i]] = 1;
		}
	}
	
	int first = 1 ;
	
	for(int i = 1 ; i <= w ; i++ )
	{
		if(answer[i] == 1 && first == 1 )
		{
			first = 0 ; 
			printf("%d",i);
		}
		
		else if( answer[i] == 1 )
		{
			printf(" %d",i);
		}
	}
	printf("\n");
	
	return 0 ; 
}