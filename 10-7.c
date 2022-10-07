#include <stdio.h>

int main(void){
	int n,k,i;
	int num1=1,num2=1;
	scanf("%d %d",&n,&k);
	for(i=n;i>n-k;i--){
		num1*=i;
	}
	for(i=k;i>1;i--){
		num2*=i;
	}
	printf("%d",num1/num2);
	return 0;
