#include <stdio.h>

int check(int num){
	int j;
	for(j=2;j*j<=num;j++){
		if(num%j==0) return 0;
	}
	return 1;
}

int main(void){
	int N,M, i,j;
	scanf("%d %d", &M, &N);
	for(i=M;i<=N;i++){
		if(i==2) printf("2\n");
		else if(i>2){
			if(check(i)==1) printf("%d\n", i);
		} 
	}
	return 0;
}
