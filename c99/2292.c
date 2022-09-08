#include <stdio.h>

int main(void){
	int sum=1,a,b,n=0;
	scanf("%d", &a);
	while(1){
		sum+=n*6;
		if(sum>=a) break;
		n++;
	}
	printf("%d", n+1);
}
