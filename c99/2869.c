#include <stdio.h>

int main(void){
	int A,B,V, num=0;
	scanf("%d %d %d", &A,&B,&V);
	if(A>=V) {
		printf("1");
		return 0;
	}
	if((double)(V-A)/(double)(A-B) > (V-A)/(A-B)) num=(V-A)/(A-B)+1;
	else num=(V-A)/(A-B);
	printf("%d",num+1);
	
	return 0;
}
