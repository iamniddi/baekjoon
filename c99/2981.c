#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int ABS(int x){
	if(x<0){
		return -x;
	}
	else {
		return x;
	}
}

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else {
		return gcd(b,a%b);
	}
}

int main(void){
	int arr[100]={0}, saveArr[99]={0},N,j, i, sum=0, min=1000000000, tmp, minIndex;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d", &arr[i]);
	
	for(i=0;i<N;i++){
		for(j=0;j<N-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
		
	for(i=0;i<N-1;i++){
		tmp=arr[i]-arr[i+1];
		saveArr[i]=ABS(tmp);
		if(saveArr[i]<min){
			min=saveArr[i];
			minIndex=i;
		}
	}
	i=1;
	while(i<=min){
		i++;
		sum=0;
		for(j=0;j<N-1;j++){
			if(saveArr[j]%i!=0) continue;
			sum++;
		}
		if(sum==N-1){
				printf("%d ", i);
		}
	}
	return 0;
}
