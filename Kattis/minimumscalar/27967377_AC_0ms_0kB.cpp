#include<stdio.h>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std; 

int main(){
	
	long long int t_case = 0 , t_num ; 
	
	scanf("%d",&t_case);
	
	for( long long int i = 1 ; i <= t_case ; i++ )
	{
		scanf("%d",&t_num);
		
		long long int arr_a [t_num] = {0} ; 
		long long int arr_b [t_num] = {0} ; 
		
		for( long long int j = 0 ; j < t_num ; j++ )
		{
			scanf("%lld",&arr_a[j]);
		}
		
		for( long long int j = 0 ; j < t_num ; j++ )
		{
			scanf("%lld",&arr_b[j]);
		}
		
		long long int asize = sizeof(arr_a) / sizeof(arr_a[0]);
		long long int bsize = sizeof(arr_b) / sizeof(arr_b[0]);
		
		sort(arr_a, arr_a + asize);
		
		sort(arr_b ,arr_b + bsize , greater<int>() );
		
		long long int total = 0 ;
		long long int temp ;
		
		for( int j = 0 ; j < t_num ; j++ )
		{
			temp = arr_a[j] * arr_b[j];
			
			total = total + temp;
		}
		
		printf("Case #%lld: %lld\n",i,total);
		
//		for( int j = 0 ; j < t_num ; j++ )
//		{
//			printf("%d %d\n",arr_a[j] , arr_b[j]);
//		}
		
	}
	
	return 0 ;
}