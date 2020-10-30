#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
	char value ; 
	struct data *next , *prev ;
};

void pushTail( struct data **localHead , struct data **localTail , char x )
{	
	struct data *nNode = (struct data*)malloc(sizeof(struct data));
	nNode->next = NULL ;
	nNode->prev = NULL ;
	nNode->value = x ; 
	
	if( *localHead == NULL )
	{
		*localHead = *localTail = nNode ; 
	}

	else
	{
		(*localTail)->next = nNode ;
		nNode->prev = *localTail ; 
		*localTail = nNode ; 
	}
}

void printAll( struct data **lHead )
{
	
	if( *lHead == NULL ) return ;
	
	struct data *currData = *lHead ;
	
	while( currData != NULL){
		printf("%c",currData->value );
		currData= currData->next ;
	}
	printf("\n");
}

void popBlakang( struct data **lHead , struct data **lTail)
{
	if( *lHead == NULL ) return ;
	
	else if( *lHead == *lTail )
	{
		free(*lHead);
		*lHead = *lTail = NULL ;
	}
	
	else
	{
		struct data *temp = *lTail ;
		*lTail = temp->prev ;
		(*lTail)->next = NULL ;
		free(temp);
	}
}

void popAll( struct data **lHead , struct data **lTail )
{
	if( *lHead == NULL ) return ;
	
	while( *lHead != NULL ){
		popBlakang( lHead , lTail);	
	}
}

int pangkat( char x){
	if(x == '+' || x == '-') 		return 2;
	else if(x == '*' || x == '/') 	return 3;
	else if(x == '^') 				return 4;
	
	return 1 ; 
}

int main(){
	
	struct data *headS = NULL  , *tailS = NULL , *headQ = NULL , *tailQ = NULL ;
	
	int Tcase ;
	scanf("%d",&Tcase); 
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		char word[550];
		
		getchar(); scanf("%[^\n]",word);
		
		for(int j = 0 ; j < strlen(word) ; j++ )
		{
			if(word[j] >= '1' && word[j] <= '9' || word[j] >= 'a' && word[j] <= 'z' || word[j] >= 'A' && word[j] <= 'Z' )
			{
				pushTail( &headQ , &tailQ , word[j] );
			}
			
			else if ( word[j] == '(')
			{
				pushTail( &headS , &tailS , word[j] );
			}
			
			else if ( word[j] == ')' )
			{
				while( headS != NULL && tailS->value != '(' )
				{
					pushTail(&headQ,&tailQ,tailS->value);
					popBlakang(&headS,&tailS);
				}
				
				if( tailS->value == '(')
				{
					popBlakang(&headS,&tailS);
				}
			}
			
			else if( word[j] == '+' || word[j] == '-' || word[j] == '*'|| word[j] == '/' || word[j] == '^' )
			{
				while(pangkat(word[j]) < pangkat( *&tailS->value) || pangkat(word[j]) == pangkat(*&tailS->value) && word[j] != '^')
				{
					pushTail(&headQ,&tailQ,tailS->value);
					popBlakang(&headS , &tailS);
				}
				pushTail( &headS , &tailS , word[j] );
			}	
		}	
		
		while( tailS != NULL )
		{
			pushTail(&headQ,&tailQ,tailS->value);
			popBlakang(&headS , &tailS);
		}
		
		printAll( &headQ );
		popAll( &headQ , &tailQ );
		popAll( &headS , &tailS );
	}
	
	return 0 ;
}