#include<stdio.h>
#include<string.h>

int main(){
	
	int n = -1 , k , kn; 
	
	while(n != 0 )
	{
		if(n != -1)
		{
			printf("\n");
		}
		
		scanf("%d %d",&n,&k);
		getchar();
		
		kn = k*n*(n-1)/2;
		int p1,p2;
		char m1[20];
		char m2[20];
		
		int win[300] = {0};
		int lost[300] = {0};
		
		for( int i = 1 ; i <= kn ; i++ )
		{
			scanf("%d %s %d %s",&p1 ,m1 , &p2 ,m2);getchar();
			
			if(m1[0] == 'p' && m2[0] == 'r' || m1[0] == 'r' && m2[0] == 's' || m1[0] == 's' && m2[0] == 'p')
			{
				win[p1] = win[p1] + 1 ;
				lost[p2] = lost[p2] + 1 ;
			}
			
			else if(m1[0] == 'r' && m2[0] == 'p' || m1[0] == 's' && m2[0] == 'r' || m1[0] == 'p' && m2[0] == 's')
			{
				win[p2] = win[p2] + 1 ;
				lost[p1] = lost[p1] + 1 ;
			}
		}
		
		for( int i = 1 ; i <= n ; i++ )
		{
			if(win[i] == 0 && lost[i] > 0)
			{
				printf("0.000\n");
			}
			
			else if( win[i] == 0 && lost[i] == 0)
			{
				printf("-\n");
			}
			
			else
			{
				printf("%.3lf\n",win[i]/(win[i]*1.0+lost[i]*1.0));
			}
		}
	}
	
	return 0 ;
}