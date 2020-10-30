#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
	char value ; 
	struct data *next ; 
};

char arr[100100];
int valid = 0 ; 

void push(  struct data **localHead , struct data **localCurr , char x)
{
	struct data *nNode = (struct data*)malloc(sizeof(struct data));
	nNode->next = NULL ; 
	nNode->value = x ; 
	
	if( *localCurr == NULL )
	{
		*localCurr = nNode ; 
		*localHead = nNode ;
	}
	
	else if( valid == 1  )
	{
		valid = 0 ; 
		nNode->next = *localHead;
		*localHead = *localCurr = nNode ;  
	}
	
	else
	{
		nNode->next = (*localCurr)->next ; 
		(*localCurr)->next = nNode ;
		*localCurr = nNode ; 
	}
}

void printAll( struct data **localHead){
	
	if(*localHead == NULL ) return ;
	
	struct data *temp = *localHead ;
	
	while( temp->next != NULL )
	{
		printf("%c",temp->value);
		temp = temp->next ;	
	}
	printf("%c\n",temp->value);
}

void popAll( struct data **localHead)
{
	
	if( *localHead == NULL ) return ; 
	
	struct data *temp = *localHead ;
	
	while( (*localHead) ==  NULL )
	{
		temp = *localHead ; 
		*localHead = (*localHead)->next ;
		free(temp);
	}
}

int main(){
	
	while(scanf("%s",arr) != EOF)
	{
		struct data *head = NULL , *tail = NULL  , *curr = NULL ;
		valid = 0 ; 
		
		int Tlen = strlen(arr);
		
		for ( int i = 0 ; i < Tlen ; i++ )
		{
			if( arr[i] == '['  )
			{
				if(head != NULL)
				{
					curr = head ; 
					valid = 1 ;	
				}
				continue ;
			}
			
			if( arr[i] == ']' )
			{
				valid = 0 ; 
				if( curr != NULL )
				{
					struct data *temp = curr ;
					
					while( temp->next != NULL)
					{
						temp = temp->next;
					}
					curr = tail = temp ; 
				}
				continue ;
			}
			push( &head , &curr , arr[i]);
		}
		
		printAll(&head);
		popAll(&head);	
		getchar();
	}
	
	return 0 ; 
}
