#include<stdio.h>

int main(){
	
	int a , b , c ;
	int arr[5];
	scanf("%d %d %d",&a,&b,&c);
	
	int max = 0 ;
	
	arr[0] = a+(b*c);
	arr[1] = a*(b+c);
	arr[2] = (a+b)*c;
	arr[3] = a+(b*c);
	arr[4] = a*b*c ;
	arr[5] = a+b+c ; 
	
	
	for( int i = 0 ; i < 6 ; i++)
	{		
	if( max < arr[i])
		max = arr[i];
	}
	
	printf("%d\n",max);
	
	return 0 ; 
}