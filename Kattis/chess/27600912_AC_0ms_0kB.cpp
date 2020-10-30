#include<stdio.h>

int main()
{
	int Tcase;
	
	scanf("%d",&Tcase);getchar();
	
	for( int i = 0 ; i < Tcase ; i++ )
	{
		int a1 , a2 ;
		int w1 , w2 ;
		char h1 , h2 ;
		
		scanf("%c",&h1);getchar();
		scanf("%d",&a1);getchar();
		scanf("%c",&h2);getchar();
		scanf("%d",&a2);getchar();
		
		if( a1 == a2 && h1 == h2 )
		{
			printf("0 %c %d\n",h1,a1);
			continue;
		}
		
		else if(((h1 == 'A' || h1 == 'C' || h1 =='E' || h1 == 'G') && a1 % 2 == 1 ) || ((h1 == 'B' || h1 == 'D' || h1 == 'F' || h1 == 'H') && a1 % 2 == 0 ))
		{
			w1 = 1 ;
		}
		
		else
		{
			w1 = 0 ;
		}
		
		if(((h2 == 'A' || h2 == 'C' || h2 =='E' || h2 == 'G') && a2 % 2 == 1 ) || ((h2 == 'B' || h2 == 'D' || h2 == 'F' || h2 == 'H') && a2 % 2 == 0 ))
		{
			w2 = 1 ;
		}
		
		else
		{
			w2 = 0 ;
		}
		
		if( w1 != w2)
		{
			printf("Impossible\n");
			continue;
		}	
		
		int cordinat1,cordinat2;
		
		cordinat1 = h1 - 64;
		cordinat2 = h2 - 64;
		
		int urx,ulx,drx,dlx;
		int ury,uly,dry,dly;
				
		urx = ulx = drx = dlx = cordinat1;
		ury = uly = dry = dly = a1;
		
		int jawaban = 0 ;
		
		for(int j = 1 ; j <= 8 ; j++)
		{
			urx++;
			ury++;
			
			ulx--;
			uly++;
			
			drx++;
			dry--;
			
			dlx--;
			dly--;
			
			if((urx == cordinat2  && ury == a2)||(ulx == cordinat2  && uly == a2)||(drx == cordinat2  && dry == a2)||(dlx == cordinat2  && dly == a2))
			{
				printf("1 %c %d %c %d\n",h1,a1,h2,a2);
				jawaban = 1 ;
				break;
			}	
		}
		
		if(jawaban == 1 )
		{
			continue;
		}
		
		int lock1 = 0 ;
		
		printf("2 %c %d ",h1,a1);
		
		for(int jj = 1 ; jj <= 8 ; jj++ )
		{
			for( int kk = 1 ; kk <= 8 ; kk++)
			{
				if((w1 == 1 && jj % 2 == 1 && kk % 2 == 1) || (w1 == 1 && jj % 2 == 0 && kk % 2 == 0) || (w1 == 0 && jj % 2 == 0 && kk % 2 == 1) || (w1 == 0 && jj % 2 == 1 && kk % 2 == 0))
				{
					urx = ulx = drx = dlx = jj;
					ury = uly = dry = dly = kk;
					
					lock1 = 0 ;
					
					for(int mm = 0 ; mm < 8 ; mm++ )
					{
						urx++;
						ury++;
						
						ulx--;
						uly++;
						
						drx++;
						dry--;
						
						dlx--;
						dly--;
						
						if((urx == cordinat1 && ury == a1) || (urx == cordinat2 && ury == a2))
						{
							if(lock1 == 0)
							{
								lock1 = 1 ;
							}
							
							else
							{
								printf("%c %d",64+jj,kk);
								lock1 = 2 ; 
								break;
							}
						}
						
						if((ulx == cordinat1 && uly == a1) || (ulx == cordinat2 && uly == a2))
						{
							if(lock1 == 0)
							{
								lock1 = 1 ;
							}
							
							else
							{
								printf("%c %d",64+jj,kk);
								lock1 = 2 ; 
								break;
							}
						}
						
						if((drx == cordinat1 && dry == a1) || (drx == cordinat2 && dry == a2))
						{
							if(lock1 == 0)
							{
								lock1 = 1 ;
							}
							
							else
							{
								printf("%c %d",64+jj,kk);
								lock1 = 2 ; 
								break;
							}
						}
						
						if((dlx == cordinat1 && dly == a1) || (dlx == cordinat2 && dly == a2))
						{
							if(lock1 == 0)
							{
								lock1= 1 ;
							}
							
							else
							{
								printf("%c %d",64+jj,kk);
								lock1 = 2 ; 
								break;
							}
						}
					}
					
					if(lock1 == 2 )
					{
						break;
					}
					
				}
				
				if(lock1 == 2 )
				{
					break;
				}	
				
			}
			
			if(lock1 == 2 )
			{
				break;
			}
			
		}
		
		printf(" %c %d\n",h2,a2);
		
	}
	
	return 0 ; 
}

