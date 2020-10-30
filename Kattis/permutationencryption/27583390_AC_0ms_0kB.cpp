#include<stdio.h>
#include<string.h>

int main(){
	
	int t_case = 1;
	int arr[40];
	char word[500] = {""};
	char fin[500] = {""};
	
	scanf("%d",&t_case);getchar();
	
	while(t_case != 0)
	{
		
		char word[500] = {""};
		char fin[500] = {""};
	
		for( int i = 0 ; i < t_case ; i++ )
		{
			scanf("%d",&arr[i]);
		}
		
		getchar();scanf("%[^\n]",word);
		
		int len = strlen(word);
		int count = 0 ;
		
		while(1){
			
			if( len <= count)
			{
				break ;
			}
			
			count = count + t_case;
		}
		

		for( int i = len ; i <= count ; i++ )
		{
			if( i == count)
			{
				word[i] = '\0';
			}
			
			else
			{
				word[i] = ' ';
			}
		}
		
		int counter = 0 ;
		int a , b ; 
		for( int i = 0 ; i < count/t_case ; i++ )
		{
			for( int j = 0 ; j < t_case ; j++ )
			{
				a = j+counter ;
				b = arr[j]+counter-1;
				fin[a] = word[b];
			}
			counter = counter + t_case ; 
		}
		
		printf("'%s'",fin);
		printf("\n");
		
		scanf("%d",&t_case);getchar();
		
	}
	
	return 0;
}