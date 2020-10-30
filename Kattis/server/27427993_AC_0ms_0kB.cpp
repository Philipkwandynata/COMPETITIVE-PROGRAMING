#include<stdio.h>

int main(){
	
	int a , b , c;
	int temp;
	int arr[100] = {0} ;
	scanf("%d %d",&a,&b);
	
	for( int i = 0 ; i < a ; i++ )
	{
		scanf("%d",&temp);
		
		if( i == 0 )
		{
			arr[i] = temp ;
			continue;
		}
		
		arr[i] = arr[i-1] + temp ;
	}
	
	for( int i = 0 ; i < a ; i++ )
	{
		if(b<arr[i])
		{
			printf("%d",i);
			break;
		}
		
		if( i == a-1 && b >= arr[i])
		{
			printf("%d",a);
		}
	}
	
	return 0 ; 
}