#include <stdio.h>
int arr[1000010]={0,};

int fibo(int N){
	if(N<=1) return N;
	if(arr[N]!=0){
		return arr[N];
	}
	else {
		arr[N]=(fibo(N-1)+fibo(N-2))% 15746;
		return arr[N];
	}
}

int main(void){
	int N;
	scanf("%d", &N);
	printf("%d", fibo(N+1));
	return 0;
}
