#include <stdio.h>
sum1=0, sum2=0;

fib(n) {
    if (n == 1 || n == 2){
    	sum1++;
    	return 1;
	}
    else return (fib(n - 1) + fib(n - 2));
}

int data[100]={0,};

int fibonacci(int x){
	if(x<=2){
		sum2++;
		return 1;
	}
	if (data[x]!=0){
		return data[x];
	}
	else {
		data[x] = fibonacci(x-1)+fibonacci(x-2);
		return data[x];
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	fib(n);
	fibonacci(n);
	printf("%d %d", sum1, sum2);
}
