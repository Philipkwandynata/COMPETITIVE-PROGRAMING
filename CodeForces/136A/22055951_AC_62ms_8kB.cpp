#include<stdio.h>

int main(){
	
	int Tcase ; 
	int ans[150];
	
	scanf("%d",&Tcase);
	
	for( int i = 1 ; i <= Tcase ; i++ )
	{
		int temp ;
		
		scanf("%d",&temp);
		
		ans[temp] = i ;
	}
	
	for( int i = 1 ; i <= Tcase ; i++ )
	{
		printf("%d ",ans[i]);
	}
	
	return 0 ;
}