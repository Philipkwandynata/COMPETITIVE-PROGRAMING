#include<stdio.h>

int main(){
	
	int Tcase = 0 ;
	
	scanf("%d",&Tcase);
	
	int sumx  , sumy  , sumz ;
	
	int x,y,z;
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		scanf("%d %d %d",&x,&y,&z);
		
		if( i == 0 )
		{
			sumx = x ;
			sumy = y ;
			sumz = z ;
		}
		
		else
		{
			sumx += x; 
			sumy += y;
			sumz += z; 
		}
	}
	
	if( sumx == 0 && sumy == 0 && sumz == 0  )
	{
		printf("YES\n");
	}
	
	else
	{
		printf("NO\n");
	}
	
	return 0 ;
}