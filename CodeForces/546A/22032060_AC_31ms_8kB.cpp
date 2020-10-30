#include<stdio.h>

int main()
{
	int aa , bb , dd ;
	
	scanf("%d %d %d",&aa,&bb,&dd);
	
	int temp = dd+1;
	
	int total = aa * dd * temp  / 2;
	
	if( bb > total )
	{
		printf("0\n");
	}
	
	else
	{
		printf("%d\n",total-bb);
	}
	
	return 0;
}