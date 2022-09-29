#include <stdio.h>

int main(void){
	float W,H,X,Y, a,b;
	int P,i;
	scanf("%f %f %f %f %d", &W,&H,&X,&Y,&P);
	int sum=0;
	for(i=0;i<P;i++){
		scanf("%f %f", &a,&b);
		if(a<=X+W&&X<=a&&b<=Y+H&&Y<=b){
			sum++;
			continue;
		}
		if((a-X)*(a-X)+(b-(Y+H/2))*(b-(Y+H/2))<=H/2*H/2){
			sum++;
			continue;
		}
		if((a-(X+W))*(a-(X+W))+(b-(Y+H/2))*(b-(Y+H/2))<=H/2*H/2){
			sum++;
			continue;
		}
	}
	printf("%d", sum);
	return 0;
}
