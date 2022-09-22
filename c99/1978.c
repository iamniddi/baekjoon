#include <stdio.h>

int main(void){
	int N, i,j, num;
	int result = 0;
	scanf("%d", &N);
	for(i=0; i<N;i++){
		scanf("%d", &num);
		if(num!=1&&num!=2){
			for(j=2;j<num;j++){
				if(num%j==0) break;
				if(j==num-1) result ++;
			}
		}
		else if(num==2){
			result ++;
		}
	}
	printf("%d",result);
	return 0;
}
