#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 

int main(){
	
	long long int N , total ;
	
	scanf("%lld %lld",&N ,&total);
	
	long long int a , b , c ; 
	long long int t[N];
	
	scanf("%lld %lld %lld %lld",&a ,&b ,&c , &t[0]);
	
	for( long long int i = 1 ; i < N ; i++ )
	{
		t[i] = (((a*t[i-1]) + b ) % c ) + 1 ;
	}
	
	long long int asize = sizeof(t) / sizeof(t[0]);
	sort(t, t + asize);
	
	long long int total_time = 0 , total_problem = 0 , temp = 0  ; 
	
	for( long long int i = 0 ; i < N ; i++ )
	{
		if( temp + t[i] <= total)
		{
			total_time = (total_time + t[i] + temp) % 1000000007 ;
			temp += t[i]; 
			total_problem++ ; 
		}
		
		else 
		{
			break;	
		}
	}
	
	printf("%lld %lld\n",total_problem,total_time);
	
	return 0 ;
}

