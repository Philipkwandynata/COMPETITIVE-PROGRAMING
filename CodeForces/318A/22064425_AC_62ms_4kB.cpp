#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
	ll a , b ;
	
	cin >> a >> b ;
		
	ll aa ; 
	
	aa =  a/2 ;
	
	if(a % 2 == 1 )
	{
		aa++ ; 
	}
	
	if( b <= aa)
	{
		cout << b*2-1 ;
	}
	
	else
	{
		ll temp = b-aa ;
		
		cout << temp * 2 << "\n";
	}
	
	return 0 ; 
}