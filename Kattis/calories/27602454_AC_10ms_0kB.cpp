#include<stdio.h>

int main(){

char word[1000];
int val = 0 ;

double num[10];
char type[10] ={};
double totalfat = 0, total = 0 , persen = 0 , persatu = 0 , fintotal = 0 ;

while(1){

	scanf("%[^\n]",word);getchar();
	
	if( word[0] == '-' )
	{
		if(val == 0 )
		{
			printf("");
			val = 1 ;
			printf("%.0lf%c\n",totalfat/fintotal*100,37);
			totalfat = 0, total = 0 , persen = 0 , persatu = 0 , fintotal = 0 ;
			continue;
		}
		
		else
		{
			break;
		}
	}
	
	else
	{
		val = 0 ;
	}
	
	sscanf(word,"%lf%c %lf%c %lf%c %lf%c %lf%c",&num[0],&type[0],&num[1],&type[1],&num[2],&type[2],&num[3],&type[3],&num[4],&type[4]);
	
	for( int i = 0 ; i < 5 ; i++ )
	{
		if(type[i] == 'C')
		{
			total = total + num[i];
		}
		
		else if(type[i] == 'g')
		{
			if( i == 0 )
			{
				total = total + (num[i] * 9);
			}
			
			else if( i == 1 || i == 2 || i == 3 )
			{
				total = total + (num[i] * 4);
			}
			
			else
			{
				total = total + (num[i] * 7);
			}
		}
		
		else if(type[i] == '%')
		{
			persen = persen + num[i];
		}
	}
	
	persatu = total/(100 - persen);
	
	total = total + (persen*persatu); 
	
	if( type[0] == 'C')
	{
		totalfat = totalfat + num[0];
	}
	
	else if( type[0] == 'g')
	{
		totalfat = totalfat + (num[0]*9);
	}
	
	else
	{
		totalfat = totalfat + persatu * num[0];
	}
	
	fintotal = fintotal + total ;
	total = 0 ;
	persen = 0 ;
}

	
	return 0 ; 
}