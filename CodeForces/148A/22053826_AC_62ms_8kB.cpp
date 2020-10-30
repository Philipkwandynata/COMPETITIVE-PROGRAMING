#include<stdio.h>

int main(){
	
	int a,b,c,d,total;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&total);
	
	int count = 0 ;
	
	for( int i = 1 ; i <= total ; i++)
	{
		if( i%a == 0 || i%b == 0 || i%c == 0 ||i%d == 0)
		{
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0 ; 
}