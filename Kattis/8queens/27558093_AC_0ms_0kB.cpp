#include<stdio.h>
#include<string.h>

int main(){
	
	int length = 8 ; 
	int benar = 1 ; 
	char chess[100][100];
	
	int counter = 0 , min = 0 ;
	
	for( int ii = 0 ; ii < length ; ii++ )
	{
		scanf("%[^\n]",chess[ii]);getchar();
	}	
	
	for( int xx = 0 ; xx < length ; xx++ )
	{
		for ( int yy = 0 ; yy < length ; yy++ )
		{
			if(chess[xx][yy] == '*')
			{
				counter++;
				
				if( xx < yy)
				{
					min = xx ;
				}
				
				else
				{
					min = yy ; 
				}
				
				int mulai_x , mulai_y ;
				
				if( xx+yy < 8 )
				{
					mulai_x = 0  ;
					mulai_y = xx+yy ;
				}
				
				else
				{
					mulai_y = 7 ; 
					mulai_x = xx-(7-yy);
				}
				
				for( int zz = 0 ; zz < length ; zz++ )
				{	
					if(chess[xx][zz] == '*' && zz != yy )
					{
						printf("invalid\n");
						benar = 0 ; 
						break;
					}
					
					if(chess[zz][yy] == '*' && zz != xx )
					{
						printf("invalid\n");
						benar = 0 ; 
						break;
					}
					
					if(chess[xx-min+zz][yy-min+zz] == '*' && (xx-min+zz) != xx && (yy-min+zz) != yy && (xx-min+zz) < 8 && (yy-min+zz) < 8 )
					{
						printf("invalid\n");
						benar = 0 ; 
						break;
					}
					
					if(chess[mulai_x+zz][mulai_y-zz] == '*' && mulai_x+zz != xx && mulai_y-zz != yy && mulai_x+zz < 8 && mulai_y-zz >= 0 )
					{
						printf("invalid\n");
						benar = 0 ; 
						break;
					}
				}
			}
			
//			printf("counter %d i = %d j = %d\n",counter,i,j);
			
			if(benar == 0 )
			{
				break;
			}
		}
		
		if(benar == 0 )
		{
			break;
		}
	}
	
	if(benar != 0)
	{
		if( counter != 8)
		{
			printf("invalid\n");
		}
		
		else
		{
			printf("valid\n");
		}
	}
	
	return 0 ;
}