#include<stdio.h>
#include <algorithm> 
#include <iostream>
using namespace std;

int main(){
	
	int Tcase , counter = 0 ; 
	int array[2000];
	
	cin >> Tcase ;
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		cin >> array[i];	
	}
	
	sort(array,array+Tcase);
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		if( i == 0)
		{
			cout << array[i];
			counter++; 	
		}
		
		if ( counter == 0 )
		{
			cout << " " << array[i];
			counter++; 
		}
		
		if( array[i]+1 != array[i+1])
		{
			if(counter > 2)
			{
				cout << "-" << array[i];
			}
			
			else if( counter == 2)
			{
				cout << " " << array[i];
			}

			counter = 0;
		}
		
		else if( array[i]+1 == array[i+1])
		{
			counter++;
		}
		
		else if( i == Tcase-1 )
		{
			if(counter > 2)
			{
				cout << "-" << array[i];
			}
			
			else if( counter == 2)
			{
				cout << " " << array[i];
			}
			counter = 0;
		}
		
	}
	
	printf("\n");
	
	return 0;
}