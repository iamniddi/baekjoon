#include <stdio.h>

int main(void){
	char arr[10000];
	int i,j,tmp,cnt=0;
	scanf("%s", arr);
	while(arr[cnt]!=NULL){
		cnt++;
	}
	for(i=0;i<cnt;i++){
		for(j=0;j<cnt-1;j++){
			if(arr[j+1]>arr[j]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	for(i=0;i<cnt;i++){
		printf("%c", arr[i]);
	}
}
