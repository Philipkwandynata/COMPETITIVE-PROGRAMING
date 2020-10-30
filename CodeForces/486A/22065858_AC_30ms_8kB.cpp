#include<bits/stdc++.h>

using namespace std ;

#define ll long long 

int main(){

	ll tcase ;
	scanf("%lld",&tcase);
	
	if( tcase % 2 == 0  )
	{
		printf("%lld\n",tcase/2);
	}
	
	else
	{
		ll temp = tcase/2+1 ;
		printf("%lld\n",temp*-1);
	}

	
}