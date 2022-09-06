#include <stdio.h>

int main(void){
	long long a,b,c, n=0;
	scanf("%lld %lld %lld", &a, &b, &c);
	if(b>c || c-b==0 || a==0){
		printf("-1");
		return 0;
	}
	printf("%d", (a/(c-b)+1));
	return 0;
}
