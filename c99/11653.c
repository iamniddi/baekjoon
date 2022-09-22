#include <stdio.h>

int main(void){
	int N;
	int i=2;
	scanf("%d", &N);
	if(N>1){
		while(i<N){
			if(N%i==0){
				N/=i;
				printf("%d\n", i);
				i=1;
			}
			i++;
		}
		printf("%d", N);
	}
	return 0;
}
