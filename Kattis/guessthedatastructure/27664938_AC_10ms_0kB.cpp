#include <bits/stdc++.h>

using namespace std; 

int main(){
	
	int T_case , a, b; 
	
	while(scanf("%d",&T_case) != EOF)
	{
		queue<int>q;
		stack <int> s;
		priority_queue <int> pq; 
		int valq = 1, vals = 1, valpq = 1;
		
		for( int i = 0 ; i < T_case ; i++ )
		{
			scanf("%d %d",&a,&b);
			
			if(a == 1)
			{
				if( valq == 1 )
				{
					q.push(b);
				}
				if( vals == 1 )
				{
					s.push(b);	
				}
				if( valpq == 1 )
				{
					pq.push(b);	
				}
			}
			
			else
			{
				if( q.empty())
				{
					valq = 0 ; 
				}
				
				else if( valq == 1)
				{
					if( q.front() == b)
					{
						q.pop();
					}
					
					else
					{
						valq = 0;
					}
				}
				
				if( s.empty())
				{
					vals = 0 ; 
				}
				
				else if( vals == 1)
				{
					if( s.top() == b)
					{
						s.pop();
					}
					
					else
					{
						vals = 0;
					}
				}
				
				if( pq.empty())
				{
					valpq = 0 ; 
				}
				
				else if( valpq == 1)
				{
					if( pq.top() == b)
					{
						pq.pop();
					}
					
					else
					{
						valpq = 0;
					}
				}
			}
		}
		
		if(valq == 0 && vals == 0 && valpq == 0)
		{
			printf("impossible\n");
		}
		
		else if((valq == 1 && vals == 1 && valpq == 1)||(valq == 1 && vals == 1)||(vals == 1 && valpq == 1)||(valq == 1 && valpq == 1))
		{
			printf("not sure\n");
		}
		
		else if( valq == 1)
		{
			printf("queue\n");
		}
		
		else if( vals == 1)
		{
			printf("stack\n");
		}
		
		else if ( valpq == 1 )
		{
			printf("priority queue\n");
		}
	}
	return 0 ; 
}
