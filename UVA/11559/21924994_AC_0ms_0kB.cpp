#include<stdio.h>

int main(){
	
	int participants , budget ,Thotels , Tweek ;
	
	while(scanf("%d %d %d %d",&participants,&budget,&Thotels,&Tweek)!= EOF){
		
		int price ;
		int minimal = 0 ;
		
		for( int i = 0 ; i < Thotels ; i++ )
		{
			scanf("%d",&price);
			
			int tbed ; 
			
			for( int j = 0 ; j < Tweek ; j++)
			{
				scanf("%d",&tbed);
				
				if(tbed > participants)
				{
					if(budget > participants*price)
					{
						if(minimal == 0)
						{
							minimal = participants*price ;
						}
						
						else
						{
							if(minimal>participants*price)
							{
								minimal = participants*price;
							}
						}
					}
				}
			}
		}
		
		if(minimal == 0 )
		{
			printf("stay home\n",minimal);
		}
		
		else
		{
			printf("%d\n",minimal);
		}
		
		minimal = 0 ; 
		
	}
	
	
	
	return 0 ; 
}