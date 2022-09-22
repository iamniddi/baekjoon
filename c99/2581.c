#include <stdio.h>

int main(void){
	int M,N, i, j;
	int sum=0, min=10000;
	scanf("%d", &M);
	scanf("%d", &N);
	for(i=M;i<=N;i++){
		if(i==2) {
			sum+=2;
			min=2;
		}
		else if(i>2){
			for(j=2;j<i;j++){
				if(i%j==0) break;
				if(j==i-1) {
					if(min>i) min=i;
					sum+=i;
				}
			}
		}
	}
	if(sum==0) printf("-1"); 
	else printf("%d\n%d", sum,min);
	return 0;
}
