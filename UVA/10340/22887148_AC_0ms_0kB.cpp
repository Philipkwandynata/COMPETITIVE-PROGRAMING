#include<bits/stdc++.h>

	char a[1000000];
	char b[1000000];
	
int main(){
	
	while(scanf("%s %s",a,b) != EOF )
	{
		int count = 0 ; 
		for(int i = 0 ; i < strlen(b) ; i++ )
		{
			if( a[count] == b[i])
			{
				count++ ; 	
			}
		}
		
		if(count == strlen(a))
		{
			printf("Yes\n");
		}
		
		else
		{
			printf("No\n");
		}	
	}
}