#include <stdio.h>

int main(void){
	int N, i,j, tmp;
	int arr[1000]={0,};
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}

