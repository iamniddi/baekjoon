#include <stdio.h>

int check(int num){
	int j;
	for(j=2;j*j<=num;j++){
		if(num%j==0) return 0;
	}
	return 1;
}

int main(void){
	int T,N, i,j,num, min;
	scanf("%d", &T);
	for(i=0;i<T;i++){
		scanf("%d", &N);
		min=100000;
		for(j=2;j<=N/2;j++){
			if(check(j)==1 && check(N-j)==1&&min>N-2*j){
				min=N-2*j;
				num=j;
			}
		}
		printf("%d %d\n", num, N-num);
	}
	return 0;
}
