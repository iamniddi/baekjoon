#include <stdio.h>

int main(void){
	int N, a=5000,b=0;
	scanf("%d", &N);
//	num1=N%5;
//	num2=N%3;
//	if(num1%3!=0 && num2%5!=0){
//		printf("-1\n");
//		return 0;
//	}
//	else {
//		printf("%d",N/5+num1/3);
//	}
	if(N%5==0){
		printf("%d", N/5);
		return 0;
	}
	else if(N%3==0){
		a=N/3;
	}
	while(3*b<N){
		if((N-3*b)%5==0){
			if(a>(N-3*b)/5+b) printf("%d", (N-3*b)/5+b);
			else printf("%d", a);
			return 0;
		}
		else {
			b++;
		}
	}
	if(a!=5000){
		printf("%d", a);
		return 0;
	}
	printf("-1");
	return 0;
}
