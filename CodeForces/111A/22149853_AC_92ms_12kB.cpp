#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main(){
	
	ll a , b , c ; 
	cin >> a >> b >> c ;
	
	ll max 	= c - a + 1 ; //11
	ll max_quad	= max * max + a - 1 ; // 11 * 11 + 4
	
	if( max_quad < b || a > max )
	{
		cout << "-1" << "\n";
	}
	
	else
	{
		for(int i = 1 ; i <= a ; i++ )
		{
			if( i == 1 )
			{
				cout << max << "\n" ; 
			}
			
			else
			{
				cout << "1" << "\n";
			}
		}
	}
		
	return 0 ; 
}

