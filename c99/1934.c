#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void){
	int a,b, T, j,i=1, sum=1;
	scanf("%d", &T);
	for(j=0; j<T; j++){
		i=1, sum=1;
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
		printf("%d\n", sum*a*b);
	}
	return 0;
}
