#include<stdio.h>
#include<string.h>
char cek[100000][10];

int check(char cek[][10],int T,int N){
	int wit;
	for(int i=T;i>1;i--){
		if(N==i){
		if(strcmp(cek[N],"LIE")==0){
			wit=0;
		}else if(strcmp(cek[N],"TRUTH")==0){
			wit=1;
		}
		}
			
		if(strcmp(cek[i-1],"LIE")==0){
				if(wit==1){
					wit=0;
				}else{
					wit=1;
				}
		}else if(strcmp(cek[i-1],"TRUTH")==0){
				if(wit==1){
					wit=1;
				}else{
					wit=0;
				}
			}
		
	}
	return wit;
}

int main(){
	int T;
	int a;
	int N;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		getchar();
		scanf("%[^\n]",cek[i]);
	}
	N=T;
	a=check(cek,T,N);
	if(a==1){
		printf("TRUTH\n");
	}else{
		printf("LIE\n");
	}
	return 0;
}