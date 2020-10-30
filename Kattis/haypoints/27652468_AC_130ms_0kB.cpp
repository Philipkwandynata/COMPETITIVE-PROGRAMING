#include<stdio.h>
#include <iostream> 
#include<map>
#include<string.h>

using namespace std; 

int main(){

	map<string,int> mymap ; 
	
	int Ta , Tb , dolar ;
	
	char word[100];
	
	cin >> Ta >> Tb ;
	
	for(int i = 0 ; i < Ta ; i++ )
	{
		cin >> word >> dolar ;
		
		mymap[word] = dolar ; 	
	}

	for( int i = 0 ; i < Tb ; i++ )
	{
		int total = 0 , temp = 0 ;
		
		while(1)
		{
			temp = 0 ;
			getchar();scanf("%s",word);
			if( strcmp(word ,".") == 0)
			{
				break ; 
			}
			temp = mymap[word] ; 
			total = total + temp;
		}
		cout << total << "\n";
	}
	
	
	return 0 ;
}