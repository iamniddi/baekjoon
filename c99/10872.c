#include <stdio.h>

int main(void){
	int N,i,sum=1;
	scanf("%d", &N);
	if(N==0){
		printf("%d", 1);
		return 0;
	}
	for(i=N;i>0;i--){
		sum*=i;
	}
	printf("%d", sum);
	return 0;
}
