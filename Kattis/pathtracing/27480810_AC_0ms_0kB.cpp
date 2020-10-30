#include<stdio.h>

int main(){
	
	char a[100];
	int fin[600][600] = {0};
	
	int arrayx[600] ={0};
	int arrayy[600] ={0};
	
	int xx = 500 , yy = 500 , up = 500 , down = 500 , left = 500 , right = 500 ,count = 0 ; 
	 
	while(scanf("%s",a)!= EOF){
		
		getchar();
		
		if( a[0] == 'u')
		{
			yy--;
			
			if(yy < up)
			{
				up = yy;
			}
		}
		
		else if( a[0] == 'd')
		{
			yy++;
			
			if(yy > down )
			{
				down = yy;
			}
		}
		
		else if( a[0] == 'l')
		{
			xx--;
			
			if(xx < left)
			{
				left = xx;
			}
		}
		
		else if( a[0] == 'r')
		{
			xx++;
			
			if(xx > right )
			{
				right = xx;
			}
		}
		
		arrayx[count] = xx ;
		arrayy[count] = yy ;
		
		count++;
	}
	

	int length , high ; 
	
	length = (right - left)+3;
	high = (down-up)+3;
	
	for( int i = 0 ; i < count ; i++ )
	{
		arrayx[i] = arrayx[i]-left+1;
		arrayy[i] = arrayy[i]-up+1;
	}
	
	for( int i = 0 ; i < count-1 ; i++ )
	{
		fin[arrayy[i]][arrayx[i]] = 1 ;
	}
	
	fin[500-up+1][500-left+1] = 2 ;
	fin[arrayy[count-1]][arrayx[count-1]] = 3 ;
	
	for( int i = 0 ; i < high ; i++ )
	{
		for(int j = 0 ; j < length ; j++)
		{
			if(i==0 || i==high-1)
			{
				fin[i][j]=4;
			}
			
			else if(j==0 || j==length-1)
			{
				fin[i][j]=4;
			}
		}
	}
	
//	for( int i = 0 ; i < high ; i++ )
//	{
//		for(int j = 0 ; j < length ; j++)
//		{
//			printf("%d",fin[i][j]);
//		}	
//		printf("\n");
//	}
	
	for( int i = 0 ; i < high ; i++ )
	{
		for(int j = 0 ; j < length ; j++)
		{
			if(fin[i][j]==0)
			{
				printf(" ");
			}
			
			else if(fin[i][j]==1)
			{
				printf("*");
			}
			
			else if(fin[i][j]==2)
			{
				printf("S");
			}
			
			else if(fin[i][j]==3)
			{
				printf("E");
			}
			
			else if(fin[i][j]==4)
			{
				printf("#");
			}
		}
		printf("\n");
	}
	
	return 0 ; 
}