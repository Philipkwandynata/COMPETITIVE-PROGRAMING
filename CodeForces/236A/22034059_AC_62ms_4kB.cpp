#include<stdio.h>
#include<string.h>

int main(){
	
	char a[150];
	int arr[100] = {0};
	
	scanf("%s",a);
	
	for( int i = 0 ; i < strlen(a) ; i++)
	{
		arr[a[i] - 97]++;
	}
	
	int count = 0 ;
	
	for(int i = 0 ; i < 26 ; i++)
	{
		if(arr[i]>0)
		{
			count++ ; 
		}
	}
	
	if( count % 2 == 0 )
	{
		printf("CHAT WITH HER!\n");
	}
	
	else
	{
		printf("IGNORE HIM!\n");
	}
	
	return 0 ;
}