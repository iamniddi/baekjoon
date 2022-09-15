#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void){
	int a,b, max, min, i=1, sum=1;
	scanf("%d %d", &a, &b);
	while(i<MIN(a,b)){
		i++;
		if(a%i==0 && b%i==0){
			sum*=i;
			a=a/i;
			b=b/i;
			i=1;
		}
	}
	printf("%d\n%d", sum, sum*a*b);
}
