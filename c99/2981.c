#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void){
	int arr[100]={0}, saveArr[100]={0},N,M,j, i, sum=0, min=1000000000, last=0;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d", &arr[i]);
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	for(i=0;i*i<min-1;i++){
		//M=2บฮลอ
		for(M=2; M<=min-i;M++){
			sum=0;
			for(j=0;j<N;j++){
				if((arr[j]-i)%M!=0){
					continue;
				}
				sum++;
				if(sum==N && M>last) {
					printf("%d ", M);
					last=M;
				}
			}
		}
	}
	
	
	
	
//	min1=min;
//	for(q=0;q<N;q++){
//		i=1, sum=1;
//		while(i<min1){
//			i++;
//			for(j=0;j<N;j++){
//				if(arr[j]%q){
//			}
//			if(a%i==0 && b%i==0){
//				sum*=i;
//				a=a/i;
//				b=b/i;
//				min1=min1/i;
//				i=1;
//			}
//		}
//	}
//	printf("%d\n%d", sum, sum*a*b);
}
