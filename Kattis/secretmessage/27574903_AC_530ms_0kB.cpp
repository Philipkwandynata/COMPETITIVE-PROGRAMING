#include<stdio.h>
#include<string.h>
#include<cmath> 

int square( int x ){
	
	int nextN;
	
	if(sqrt(x)*sqrt(x) == x )
	{
		nextN = sqrt(x);
	}
	
	else
	{
		nextN = floor(sqrt(x)) + 1; 
	}
	
	return  nextN;
}

int main(){
	
	int T_case ;
	
	scanf("%d",&T_case);getchar();
	
	for(int i = 0 ; i < T_case ; i++ )
	{
		
		int hasil = 0 , pangkat = 0  , count = 0 ; 
		char arr[500][500]={""};
		char fin[500][500]={""};
		char word[15000];
		
		scanf("%s",word);getchar();
		
		hasil = square(strlen(word));
		pangkat = hasil * hasil ; 
		
		for(int x = 0 ; x < hasil ; x++ ){
			
			for( int y = 0 ; y < hasil ; y++ )
			{
				arr[x][y]= '*' ;
			}
		}
		
		
		for(int x = 0 ; x < hasil ; x++ ){
			for( int y = 0 ; y < hasil ; y++ )
			{
				arr[x][y]= word[count];
				count++;
				
				if( count == strlen(word))
				{
					break;
				}
			}
			
			if( count == strlen(word))
			{
				break;
			}
		}
		
		int county = hasil-1 ;
		
		for(int x = 0 ; x < hasil ; x++ ){
			
			int countx = 0 ;	
			
			for( int y = 0 ; y < hasil ; y++ )
			{
				fin[y][x]= arr[county][countx] ;
				countx++;
			}
			county--;
		}
		
		
		for(int x = 0 ; x < hasil ; x++ ){
			
			for( int y = 0 ; y < hasil ; y++ )
			{
				if(fin[x][y] != '*')
				{
					printf("%c",fin[x][y]);
				}
			}	
		}
		printf("\n");
		
	}
	
	return 0 ; 
}