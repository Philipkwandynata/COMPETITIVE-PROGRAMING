#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

	ll arr[1000000];
	ll arrlock[1000000] = {0};
	


int main(){
	
	ll Tcase ,total = 0 ;
	cin >> Tcase ;
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		cin >> arr[i] ;
	}
	
	for ( int i = 0 ; i < Tcase ; i++)
	{
		ll count = 1 ;
		
		if( arrlock[i] == 1)
		{
			continue; 
		}
		
		for( int j = i+1 ; j < Tcase ; j++  )
		{
			if( arrlock[j] == 1)
			{
				continue; 
			}
			
			if( arr[i] == arr[j])
			{
				arrlock[j] = 1 ;
				count++ ;
			}
			
			else
			{
				break ; 
			}
		}
		
		if(count > 1)
		{
			total = total + ((count*(count-1))/2 );
		}
		
		arrlock[i] = 1 ;
	}
	 
	cout << total+Tcase << "\n" ;
	
	return 0 ;
}