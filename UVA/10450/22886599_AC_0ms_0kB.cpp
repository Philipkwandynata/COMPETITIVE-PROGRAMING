#include<stdio.h>
  
int main () 
{ 
    long long int tcase , scenario ; 
    scanf("%lld",&tcase);
    
    long long int arr[70] ;
	long long int t1 = 0, t2 = 1, nextTerm;
    
	for ( int i = 1; i <= 60; ++i)
    {
        arr[i] = t1 ; 
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
	}
	
    for( int i = 0 ; i < tcase ; i++ )
    {
	  	scanf("%lld",&scenario);
	  	printf("Scenario #%lld:\n",i+1);
	  	printf("%lld\n\n",arr[scenario+3]);
	}
	
    return 0; 
} 