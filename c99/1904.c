#include <stdio.h>

int factorial[1000000]={0,};

int main(void){
	int N,i,j=0, sum=0;
	factorial[0]=1;
	scanf("%d", &N);
	for(i=1;i<=N;i++){
		factorial[i]=factorial[i-1]*i;
		printf("%d " , factorial[i]);
	}
	for(i=N;i>=N/2;i--){
		sum+=factorial[i]/factorial[i-j]/factorial[j];
		j++;
	}
	printf("\n%d", sum);
	return 0;
}
