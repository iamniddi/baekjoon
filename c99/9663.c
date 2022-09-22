#include <stdio.h>

int chess[15] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int N, result=0;

int crossCheck(int x,int y){
	int i;
	for(i=0;i<N;i++){
		if(chess[i]==x) return 1;
	}
	for(i=0;i<N;i++){
		if(i!=y && chess[i]!=-1 && (chess[i]==x+(i-y)||chess[i]==x-(i-y))){
			return 1;
		}
	}
	return 0;
}

void backTracking(int count) {
	int i, q;
	if(count==N){
		result++;
		return;
	}
	for(i=0;i<N;i++){
		if(crossCheck(i, count)==0){
			chess[count]=i;
			backTracking(count+1);
			chess[count]=-1;
		}
	}
}

int main(void) {
	scanf("%d", &N);
	backTracking(0);
	printf("%d", result);
	
	return 0;
}
