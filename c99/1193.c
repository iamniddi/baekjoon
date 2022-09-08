#include <stdio.h>

int main(void){
	int x, n=0, sum=0;
	scanf("%d", &x);
	while(1){
		sum+=n;
		if(x<=sum) break;
		n++;
	}
	sum=sum-x;
	if(n%2==0) printf("%d/%d", n-sum, 1+sum);
	else printf("%d/%d", 1+sum, n-sum);
	
	return 0;
}
