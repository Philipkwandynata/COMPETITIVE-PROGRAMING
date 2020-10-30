#include<stdio.h>
#include<stdlib.h>

	int R, C ;
	char Arr[110][110];
	int visit[110][110];
	
void check( int i , int j )
{
	if( i < 0 || i >= R || j < 0 || j >= C ) return ;
	
	if(visit[i][j] == 0 && Arr[i][j] == '@')
	{
		visit[i][j] = 1 ;
		
		check( i-1 , j-1 );check( i-1 , j );check( i-1 , j+1 );
		check( i   , j-1 );					check( i   , j+1 );
		check( i+1   , j-1 );check( i+1,  j );check( i +1, j+1 );
	}
}

int main(){
	
	R=1, C=1 ;
	
	while( C > 0 || R > 0 )
	{
		int count = 0 ; 	
		scanf("%d %d",&R,&C);
		
		for( int i = 0 ; i < R ; i++ )
		{
			for ( int j = 0 ; j < C ; j++ )
			{
					visit[i][j] = 0 ; 
			}
		}
		
		for( int i = 0 ; i < R ; i++ )
		{
			getchar();scanf("%s",Arr[i]);
		}
		
		for( int i = 0 ; i < R ; i++ )
		{
			for ( int j = 0 ; j < C ; j++ )
			{
				if(Arr[i][j] == '@' && visit[i][j] == 0 )
				{
					check( i , j );
					count++ ; 
				}
			}
		}
	
		if( C > 0)
		{
			printf("%d\n",count);
		}
	}
	return 0 ;
}