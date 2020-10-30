#include<stdio.h>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std; 

int main(){
	
	long long int T = 0 , max = 0 , num  , temp = 0; 
	
	scanf("%lld",&T);
	
	long long int arr_a [T] = {0} ; 
	
	for( long long int i = 0 ; i < T ; i++ )
	{
		scanf("%lld",&arr_a[i]);	
	}
	
	long long int asize = sizeof(arr_a) / sizeof(arr_a[0]);
	
	sort(arr_a, arr_a + asize , greater<int>());
	
	for( long long int j = 0 ; j < T ; j++ )
	{
		if( arr_a[j] + j + 2 > max )
		{
			max = arr_a[j]+j+2 ;	
		}	
	}
	
//	for( int j = 0 ; j < T ; j++ )
//	{
//		printf("%lld ",arr_a[j]);
//	}
//		


	printf("%lld\n",max);
	
	return 0 ;
}