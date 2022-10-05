#include <stdio.h>

int main(void){
	int N,i,j,num;
	int arr[50][2];
	int score[50], sum=0;
	scanf("%d", &N);
	for(i=0;i<N;i++) {
		scanf("%d %d",&arr[i][0], &arr[i][1]);
	}
	for(i=0;i<N;i++){
		sum=0;
		for(j=0;j<N;j++){
			if(arr[j][0]>arr[i][0]&&arr[j][1]>arr[i][1]) sum++;
		}
		score[i]=sum;
	}
	for(i=0;i<N;i++){
		printf("%d ", score[i]+1);
	}
    return 0;
}
