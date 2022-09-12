#include <stdio.h>
int cuArr[99]=0;
int numArr[100]={0};
int operatorArr[99]={0};

int backTracking(int count){
	int i;
	for(i=0;i<N-1;i++){
		if(cuArr[i]>0){
			cuArr[i]--;
		}
	}
}

int main(void){
	int N,i;
	scanf("%d", &N);
	for(i=0; i<N;i++){
		scanf("%d", &numArr[i]);
	}
	scanf("%d %d %d %d", &cuArr[0],&cuArr[1],&cuArr[2],&cuArr[3));
	return 0;
}
