#include <stdio.h>

int check(int num){
	int j;
	for(j=2;j*j<=num;j++){
		if(num%j==0) return 0;
	}
	return 1;
}


int main(void){
	int N=1, i;
	int sum=0;
	while(N!=0){
		scanf("%d", &N);
		if(N==1) printf("1\n");
		else if(N==2) printf("1\n");
		else if(N>2){
			for(i=N+1;i<N*2;i++){
				if(check(i)==1) sum++;
			}
			printf("%d\n", sum);
			sum=0;
		}
	}
	return 0;
}
