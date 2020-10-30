#include<stdio.h>

int main(){
	
	char a[100];
	char b[100];
	
	int ha,ma,sa,hb,mb,sb,h,m,s= 0;
	
	scanf("%[^\n]",a);getchar();
	scanf("%[^\n]",b);getchar();
	
	
	ha = (a[0] - '0') * 10 + a[1] - '0' ; 
	ma = (a[3] - '0') * 10 + a[4] - '0' ; 
	sa = (a[6] - '0') * 10 + a[7] - '0' ; 
	
	hb = (b[0] - '0') * 10 + b[1] - '0' ; 
	mb = (b[3] - '0') * 10 + b[4] - '0' ; 
	sb = (b[6] - '0') * 10 + b[7] - '0' ; 
	
	if(ha == hb && ma == mb && sa == sb )
	{
		printf("24:00:00\n");
	}
	
	else
	{
		if( sb < sa )
		{
			sb = sb+60; 
			mb--;
		}
		
		if( mb < ma )
		{
			mb = mb+60;
			hb--;
		}
		
		if( hb < ha )
		{
			hb = hb+24;
		}
		
		h = hb-ha; 
		m = mb-ma;
		s = sb-sa;
		
		if( h < 10 )
		{
			printf("0%d:",h);
		}
		
		else
		{
			printf("%d:",h);
		}
		
		if( m < 10 )
		{
			printf("0%d:",m);
		}
		
		else
		{
			printf("%d:",m);
		}
		
		if( s < 10 )
		{
			printf("0%d\n",s);
		}
		
		else
		{
			printf("%d\n",s);
		}
		
	}

	return 0 ; 
}