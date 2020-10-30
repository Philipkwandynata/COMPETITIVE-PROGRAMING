#include<stdio.h>
#include<string.h>



int main(){
	
	int T_case = 0 ; 
	char a[200][2000];
	int tem = -1 ; 
	int now = -1 ;
	
	scanf("%d",&T_case);
	
	for( int i = 0 ; i < T_case ; i++ )
	{
		getchar();
		scanf("%[^\n]",a[i]);		
	}
	
	for( int i = 0 ; i < T_case ; i++ )
	{
		printf("Case #%d: ",i+1);
		
		for( int j = 0 ; j < strlen(a[i]) ; j++ )
		{
			if(a[i][j] == ' ')
			{
				now = 0 ; 
				if( now != tem )
				{
					printf("0");
				}
				
				else
				{
					printf(" 0");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'a')
			{
				now = 2 ; 
				if( now != tem )
				{
					printf("2");
				}
				
				else
				{
					printf(" 2");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'b')
			{
				now = 2 ; 
				if( now != tem )
				{
					printf("22");
				}
				
				else
				{
					printf(" 22");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'c')
			{
				now = 2 ; 
				if( now != tem )
				{
					printf("222");
				}
				
				else
				{
					printf(" 222");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 'd')
			{
				now = 3 ; 
				if( now != tem )
				{
					printf("3");
				}
				
				else
				{
					printf(" 3");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'e')
			{
				now = 3 ; 
				if( now != tem )
				{
					printf("33");
				}
				
				else
				{
					printf(" 33");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'f')
			{
				now = 3 ; 
				if( now != tem )
				{
					printf("333");
				}
				
				else
				{
					printf(" 333");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 'g')
			{
				now = 4 ; 
				if( now != tem )
				{
					printf("4");
				}
				
				else
				{
					printf(" 4");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'h')
			{
				now = 4 ; 
				if( now != tem )
				{
					printf("44");
				}
				
				else
				{
					printf(" 44");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'i')
			{
				now = 4 ; 
				if( now != tem )
				{
					printf("444");
				}
				
				else
				{
					printf(" 444");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 'j')
			{
				now = 5 ; 
				if( now != tem )
				{
					printf("5");
				}
				
				else
				{
					printf(" 5");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'k')
			{
				now = 5 ; 
				if( now != tem )
				{
					printf("55");
				}
				
				else
				{
					printf(" 55");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'l')
			{
				now = 5 ; 
				if( now != tem )
				{
					printf("555");
				}
				
				else
				{
					printf(" 555");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 'm')
			{
				now = 6 ; 
				if( now != tem )
				{
					printf("6");
				}
				
				else
				{
					printf(" 6");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'n')
			{
				now = 6 ; 
				if( now != tem )
				{
					printf("66");
				}
				
				else
				{
					printf(" 66");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'o')
			{
				now = 6 ; 
				if( now != tem )
				{
					printf("666");
				}
				
				else
				{
					printf(" 666");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 'p')
			{
				now = 7 ; 
				if( now != tem )
				{
					printf("7");
				}
				
				else
				{
					printf(" 7");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'q')
			{
				now = 7 ; 
				if( now != tem )
				{
					printf("77");
				}
				
				else
				{
					printf(" 77");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'r')
			{
				now = 7 ; 
				if( now != tem )
				{
					printf("777");
				}
				
				else
				{
					printf(" 777");
				}
				tem = now ;
			}
			
			
			else if(a[i][j] == 's')
			{
				now = 7 ; 
				if( now != tem )
				{
					printf("7777");
				}
				
				else
				{
					printf(" 7777");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 't')
			{
				now = 8 ; 
				if( now != tem )
				{
					printf("8");
				}
				
				else
				{
					printf(" 8");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'u')
			{
				now = 8 ; 
				if( now != tem )
				{
					printf("88");
				}
				
				else
				{
					printf(" 88");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'v')
			{
				now = 8 ; 
				if( now != tem )
				{
					printf("888");
				}
				
				else
				{
					printf(" 888");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'w')
			{
				now = 9 ; 
				if( now != tem )
				{
					printf("9");
				}
				
				else
				{
					printf(" 9");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'x')
			{
				now = 9 ; 
				if( now != tem )
				{
					printf("99");
				}
				
				else
				{
					printf(" 99");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'y')
			{
				now = 9 ; 
				if( now != tem )
				{
					printf("999");
				}
				
				else
				{
					printf(" 999");
				}
				tem = now ;
			}
			
			else if(a[i][j] == 'z')
			{
				now = 9 ; 
				if( now != tem )
				{
					printf("9999");
				}
				
				else
				{
					printf(" 9999");
				}
				tem = now ;
			}
		}
		
		printf("\n");		
	}
	
	return 0;
}