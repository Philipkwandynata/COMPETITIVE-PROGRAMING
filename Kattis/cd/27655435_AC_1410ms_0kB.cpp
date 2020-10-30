#include<stdio.h>
#include<iostream>
#include<string.h>
#include<map>

using namespace std; 

int main(){
	
	int jack , jill , cd;
	
	while(1){
		
		scanf("%d %d",&jack,&jill);
		
		if( jack == 0 && jill == 0)
		{
			break;
		}
		
		map<int , int> mymap ; 
		
		for( int i = 0 ; i < jack ; i++ )
		{
			scanf("%d",&cd);
			mymap[cd] = 1 ;
		}
		
		int count = 0 ;
		
		for( int i = 0 ; i < jill ; i++ )
		{
			scanf("%d",&cd);
			if ( mymap.find(cd) != mymap.end())
			{
				count++;
			}
		}
		
		printf("%d\n",count); 
	}
	
	return 0 ; 
}