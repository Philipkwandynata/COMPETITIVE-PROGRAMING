#include<stdio.h>
#include<stdlib.h>

struct data{
	int value ; 
	struct data *prev , *next ; 
};	

int stack_valid = -1 , queue_valid = -1 , prior_valid = -1 ; 

void push( struct data **Head , struct data **Tail , int x ){

	struct data *nNode = (struct data*)malloc(sizeof(struct data));
	nNode->next = nNode->prev = NULL ; 
	nNode->value = x ; 
	
	if( *Head == NULL )
	{
		*Head = *Tail = nNode ;
	}
	
	else
	{
		(*Tail)->next = nNode ;
		nNode->prev = *Tail ; 
		*Tail = nNode; 
	}
}

void popStack(struct data**lHead, struct data **lTail , int Value){
	
	if( *lHead == NULL || (*lTail)->value != Value ) {
		stack_valid = 0 ;
		return ;
	};
	
	if( *lHead == *lTail)
	{
		free(*lHead);
		*lHead = *lTail = NULL;
	}
	
	else
	{
		struct data *toBeDeleted = *lTail;
		*lTail = toBeDeleted->prev;
		free(toBeDeleted);
		(*lTail)->next = NULL;
	}
}

void popQueue(struct data **lHead, struct data **lTail , int Value){
	
	if( *lHead == NULL || (*lHead)->value != Value) {
		queue_valid = 0 ;
		return ;
	};
	
	if( *lHead == *lTail)
	{
		free(*lHead);
		*lHead = *lTail = NULL;
	}
	
	else
	{
		struct data *toBeDeleted = *lHead ;
		*lHead = toBeDeleted->next;
		free(toBeDeleted);
		(*lHead)->prev = NULL;
	}
}

void pushPriority( struct data **localHead , struct data **localTail , int x){
	
	struct data *nNode = (struct data*)malloc(sizeof(struct data));
	nNode->next = nNode->prev = NULL ;
	nNode->value = x ; 
	
	if( *localHead == NULL)
	{
		*localHead = *localTail = nNode ;
	}
	
	else if( nNode->value >= (*localTail)->value )
	{
		(*localTail)->next = nNode ;
		nNode->prev = *localTail ; 
		*localTail = nNode; 
	}
	
	else if( nNode->value <= (*localHead)->value )
	{
		nNode->next = *localHead ; 
		(*localHead)->prev = nNode ;
		*localHead = nNode ; 
		
	}
	
	else
	{
		struct data *temp = *localHead ; 
		
		while( temp->value < nNode->value ){
			temp = temp->next ; 
		}
		nNode->prev = temp->prev ; 
		nNode->next = temp ;
		temp->prev->next = nNode ; 
		temp->prev = nNode ;
	}
}

void popPriority(struct data**lHead, struct data **lTail , int Value){
	
	if( *lHead == NULL || (*lTail)->value != Value ) {
		prior_valid = 0 ;
		return ;
	};
	
	if( *lHead == *lTail)
	{
		free(*lHead);
		*lHead = *lTail = NULL;
	}
	
	else
	{
		struct data *toBeDeleted = *lTail;
		*lTail = toBeDeleted->prev;
		free(toBeDeleted);
		(*lTail)->next = NULL;
	}
}

void freeAll(struct data **lHead, struct data **lTail){
	
	if(*lHead == NULL) return;
	
	struct data *temp = *lHead ;
	
	while( *lHead != NULL )
	{
		temp = *lHead ; 
		*lHead = (*lHead)->next ;
		free(temp);
	}
}

int main(){
	
	int Tcase ;
	
	while( scanf("%d",&Tcase) != EOF )
	{
		struct data *stackHead = NULL , *stackTail = NULL ;
		struct data *queueHead = NULL , *queueTail = NULL ;
		struct data *priorityHead = NULL , *priorityTail = NULL ;
			
		int Type , Value ; 
		stack_valid = queue_valid = prior_valid = -1 ; 
		
		for( int i = 0 ; i < Tcase ; i++ )
		{			
			scanf("%d %d",&Type ,&Value);
			
			if( Type == 1 && stack_valid == -1)
			{
				stack_valid = queue_valid = prior_valid = 1;
			}
			
			if( Type == 1 )
			{
				if( stack_valid == 1 ) push( &stackHead , &stackTail , Value );
				
				if( queue_valid == 1 ) push( &queueHead , &queueTail , Value );
				
				if( prior_valid == 1 ) pushPriority( &priorityHead , &priorityTail , Value);
			}
			
			else if( Type == 2 )
			{
				if( stack_valid == 1 ) popStack( &stackHead , &stackTail , Value );
				
				if( queue_valid == 1 ) popQueue( &queueHead , &queueTail , Value );
				
				if( prior_valid == 1 ) popPriority( &priorityHead , &priorityTail , Value);
			}
		}
		
		if(Tcase == 0)
		{
			printf("not sure");
		}
		
		else if( (stack_valid == 0 && queue_valid == 0 && prior_valid == 0 ) || (stack_valid == -1) )
		{
			printf("impossible");
		}

		else if( stack_valid == 1 && queue_valid == 0 && prior_valid == 0 )
		{
			printf("stack");
		}
		
		else if( stack_valid == 0 && queue_valid == 1 && prior_valid == 0  )
		{
			printf("queue");
		}
		
		else if( stack_valid == 0 && queue_valid == 0 && prior_valid == 1  )
		{
			printf("priority queue");
		}
		
		else
		{
			printf("not sure");
		}
		printf("\n");
		freeAll( &stackHead , &stackTail ),freeAll( &queueHead , &queueTail ),freeAll( &priorityHead , &priorityTail );
	}
	return 0 ; 
}

