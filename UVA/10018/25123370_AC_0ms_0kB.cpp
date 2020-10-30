#include<stdio.h>

long long reverse( long long int x)
{
	long long int temp = 0 ;
	
	while ( x > 0 )
	{
		temp = temp * 10 + x % 10 ;
		x = x / 10 ; 
	}
	
	return temp ;
}

int main(){
	
	long long int a , hasil , Tcase ;
	int iter ; 
	scanf("%lld",&Tcase);
	
	for( int i = 0 ; i < Tcase ; i++ )
	{		
		scanf("%lld",&a);
		iter = 0 ; 
		
		while(1)
		{
			iter = iter + 1 ; 
//			printf("iter = %d\n",iter);
			hasil = reverse(a);
			
			a = hasil + a ; 
			
			if( a == reverse(a))
			{
				printf("%d %lld\n",iter,a);
				break;
			}
		}
	}
	
	return 0 ; 
}