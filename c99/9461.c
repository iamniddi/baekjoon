#include <stdio.h>
long long data[100]={1,1,1,2,2,0,};

long long dp(long long n){
	if(data[n]==0){
		data[n]=dp(n-1)+dp(n-5);
		return data[n];
	}
	else{
		return data[n];
	}
}

int main(void){
	int T,i;
	long long N;
	scanf("%d", &T);
	for(i=0; i<T;i++){
		scanf("%lld", &N);
		printf("%lld\n", dp(N-1));
	}
	return 0;
}
