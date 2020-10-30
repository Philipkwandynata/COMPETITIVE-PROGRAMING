#include<stdio.h>

int main()
{
	int step ; 
	scanf("%d",&step);
	
	if(step>5 && step % 5 == 0)
	{
		step = step / 5  ;
		printf("%d\n",step);
	}
	
	else if(step>5 && step %5 != 0  )
	{
		step = step / 5 + 1 ;
		printf("%d\n",step);
	}
	
	else
	{
		printf("1\n");
	}
	return 0 ;
}