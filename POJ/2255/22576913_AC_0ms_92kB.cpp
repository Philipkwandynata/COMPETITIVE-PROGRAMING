#include<stdio.h>
#include<string.h>

int search(char inorder[], char root , int len ) 
{ 
    for (int i = 0; i < len ; i++) 
	{
		if ( inorder[i] == root ) 
		{
			return i;
		}
	}
    return -1; 
} 

void postOrder(char inorder[], char preorder[], int len ) 
{ 
	int root = search(inorder, preorder[0], len ); 
    
    if (root != 0) 
	{
		postOrder(inorder, preorder+1, root);
	} 
	
    if (root != len - 1) 
    {
    	postOrder(inorder + root + 1, preorder + root + 1, len - root - 1);  
	}
    printf("%c",preorder[0]);
} 
  
int main() 
{ 
	char inorder[40] , preorder[40]; 
	int len ; 
	
	while(scanf("%s %s",preorder, inorder) != EOF){
	    len = strlen(inorder);
	    postOrder( inorder , preorder , len );puts("");
	    getchar();
	}
	return 0; 
} 
