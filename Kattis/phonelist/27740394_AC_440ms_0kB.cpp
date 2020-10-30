#include <bits/stdc++.h>

using namespace std;

struct test
{
	long long end;
	long long prefix;
	
	struct test * Next[10];
	
	test(){
		long long k;
		end=0 , prefix=0;
		
		for(k=0;k<10;k++)
		{
			Next[k]=NULL;
		}
	}
	
}*root;

void add(struct test * node, string word)
{
	if(word=="")
	{
		node->end++;
	}		
	
	else
	{
		long long ch=word[0]-'0';
		node->prefix++;
	
		if(node->Next[ch]==NULL)
		{
			node->Next[ch]=new test();
		}
			
		word.erase(word.begin());
		add(node->Next[ch],word);
	}
}

bool find(struct test * node,string word)
{
	if(word=="")
	{
		if(node->prefix==0)
		{
			return 1;
		}
			
		else
		{
			return 0;
		}
	}
	
	else
	{
		long long ch=word[0]-'0';
		
		if(node->Next[ch]==NULL)
		{
			node->Next[ch]=new test();
		}
			
		word.erase(word.begin());
		
		return find(node->Next[ch],word);
	}
}
int main()
{
	long long Tcase , i , j ;
	
	scanf("%lld",&Tcase);
	
	while(Tcase--)
	{
		long long N;
		bool answer=1;
		
		root = new test();
		
		scanf("%lld",&N);
		string arr[N];
		
		for(i=0;i<N;i++)
		{
			string input;
			cin >> input;
			
			arr[i] = input;
			add(root,input);
		}
		
		for(i=0;i<N;i++)
		{
			answer&=find(root,arr[i]);
		}
		
		if(answer==true)
		{
			printf("YES\n");
		}
		
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}