#include <stdio.h>

int arr[15]={0,};

void cu(int n){
	int sum=0,i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum+=arr[j];
		}
		arr[i]=sum;
		sum=0;
	}
}

int main(void){
	int T, n,k;
	int i,j;
	int sum=0;
	int arr1[15]={0,};
	scanf("%d", &T);
	for(i=0;i<T;i++){
		sum=0;
		scanf("%d", &k);
		scanf("%d", &n);
		if(k>1){
			for(j=0;j<n;j++){
				arr[j]=1;
			}
			for(j=0;j<k-2;j++){
				cu(n);
			}
			for(j=1;j<n+1;j++){
				sum+=j;
				arr1[j-1]=sum;
			}
			sum=0;
			for(j=0;j<n;j++){
				sum+=arr1[j]*arr[j];
			}
			printf("%d\n", sum);
			sum=0;
		}
		else if(k==0) {
			printf("%d\n", n);
		}
		else if(k==1){
			sum=0;
			for(j=1;j<n+1;j++){
				sum+=j;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
