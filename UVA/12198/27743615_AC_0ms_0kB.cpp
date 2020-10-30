#include<bits/stdc++.h>

int main(){
	
	int Tcase = 1 , plate = 0 , cases = 0;
	char word[1000];
	
	while(1)
	{
		scanf("%d",&Tcase);
		
		if(cases++)	puts("");
		
		if(Tcase == 0 )
		{
			break;
		}
		
		int a = 0 , b = 0 ; 
		
		for( int i = 0 ; i < Tcase ; i++ )
		{
			scanf("%s %d",word ,&plate);
			
			if( word[0] == 'D')
			{
				printf("DROP 2 %d\n", plate);
				b = b + plate;
			}
			
			else if( a >= plate)
			{
				printf("TAKE 1 %d\n", plate);
				a = a - plate;
			}
			
			else
			{
				if(a)
				{
					printf("TAKE 1 %d\n", a);
					plate = plate -  a ;
					a = 0;
				}
				
				printf("MOVE 2->1 %d\n", b);
				a = a + b;
				b = 0;
				
				if(plate)
				{
					printf("TAKE 1 %d\n",plate);
					a = a - plate;
				}
			}
		}
	}
	
	
	return 0 ;
}