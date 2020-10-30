#include<stdio.h>

int main(){
	
	int a ;
	
	while(scanf("%d",&a)!= EOF)
{
	
	if( a >= 4 && a % 2 == 0   )
	{
		printf("YES");
	}
	
	else
	{
		printf("NO");
	}
}
	return 0 ;
}