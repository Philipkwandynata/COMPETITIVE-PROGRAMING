#include <stdio.h>

int main(){
	
	int tcase;
	int temp;
	int arr[5];
	
	scanf("%d",&tcase);
	
	for(int i=0;i<tcase;i++){
		scanf("%d %d %d",&arr[0], &arr[1], &arr[2]);
		for(int j=0;j<3;j++){
			for(int k=0;k<3-j-1;k++){
				if(arr[k] > arr[k+1]){
					temp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = temp;
				}
			}
		}
		printf("Case %d: %d\n",i+1, arr[1]);
	}
	
	return 0;
}