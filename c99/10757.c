#include <stdio.h>

int main(void){
	char arr1[10000], arr2[10000], arr3[10001];
	int cnt1=0,cnt2=0;
	int i, max,a;
	scanf("%s",arr1);
	scanf("%s",arr2);
	printf("\n%s", arr1);
	printf("\n%s", arr2);
	while(arr1[cnt1]!=NULL){
		cnt1++;
	}
	while(arr2[cnt2]!=NULL){
		cnt2++;
	}
	
	if(cnt1>cnt2) {
		max=cnt1;
		for(i=max;i>0;i--){
			a=arr1[i]+arr2[i-(cnt1-cnt2)]+arr3[i];
			if(a>9){
				arr3[i]++;
				arr3[i+1]=a-10;
			}
			else {
				arr3[i+1]=a;
			}
		} 
	}
	else {
		max=cnt2;
		for(i=max;i>0;i--){
			a=arr1[i]+arr2[i-(cnt2-cnt1)]+arr3[i];
			if(a>9){
				arr3[i]++;
				arr3[i+1]=a-10;
			}
			else {
				arr3[i+1]=a;
			}
		} 
	}
	printf("%s", arr3);
}
