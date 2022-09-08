#include <stdio.h>

int N,M;

int backTracking(int num, int arr1[], int arr2[]){
	int i, q;
	for(i=0;i<N;i++){
		if(arr1[i]==0){
			
			arr1[i]=1;
			arr2[num]=i;
			backTracking(num+1, arr1, arr2);
			arr1[i]=0;
			if(num==M-1) {
				for(q=0;q<M;q++){
					printf("%d ", arr2[q]+1);
				}
				printf("\n");
			}
		}
	}
}

int main(void){
	int arr1[8]={0}, arr2[8]={0};
	scanf("%d %d", &N,&M);
	backTracking(0, arr1, arr2);
}
