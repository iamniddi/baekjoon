#include <stdio.h>

int main(void){
	int N, i,j, tmp0, tmp1;
	int arr[100000][2];
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d %d", &arr[i][0],&arr[i][1]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N-1;j++){
			if(arr[j][1]>arr[j+1][1]){
				tmp0=arr[j][0];
				tmp1=arr[j][1];
				arr[j][0]=arr[j+1][0];
				arr[j][1]=arr[j+1][1];
				arr[j+1][0]=tmp0;
				arr[j+1][1]=tmp1;
			}
			else if(arr[j][1]==arr[j+1][1]&&arr[j][0]>arr[j+1][0]){
				tmp0=arr[j][0];
				tmp1=arr[j][1];
				arr[j][0]=arr[j+1][0];
				arr[j][1]=arr[j+1][1];
				arr[j+1][0]=tmp0;
				arr[j+1][1]=tmp1;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}
	return 0;
}
