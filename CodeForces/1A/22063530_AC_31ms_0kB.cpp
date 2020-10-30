#include<stdio.h>

int main(){
	
	long long int n , m , a ;
	long long int nn , mm ;
	
	scanf("%lld %lld %lld",&n,&m,&a);
	
	if( n%a == 0 )
	{
		nn = n/a ; 
	}
	
	else
	{
		nn = n/a + 1 ;
	}
	
	if( m%a == 0 )
	{
		mm = m/a ; 
	}
	
	else
	{
		mm = m/a + 1 ;
	}
	
	printf("%lld", nn*mm );
	
	return 0 ; 
}