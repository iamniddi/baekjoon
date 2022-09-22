#include <stdio.h>

//9223372036854775807 9223372036854775808

int main(void){
	char arr1[100000]={0,}, arr2[100000]={0,}, arr4[100000]={0,};
	int arr3[100001]={0,};
	int cnt1=0,cnt2=0;
	int i, max, min;
	int a;
	scanf("%s",arr1);
	scanf("%s",arr2);
	while(arr1[cnt1]!=NULL){
		cnt1++;
	}
	while(arr2[cnt2]!=NULL){
		cnt2++;
	}
	if(cnt1>cnt2){
		for(i=0;i<cnt1-cnt2;i++){
			arr4[i]='0';
		}
		for(i=cnt1-cnt2;i<cnt1;i++){
			arr4[i]=arr2[i-(cnt1-cnt2)];
		}
	}
	else {
		for(i=0;i<cnt2-cnt1;i++){
			arr4[i]='0';
		}
		for(i=cnt2-cnt1;i<cnt2;i++){
			arr4[i]=arr1[i-(cnt2-cnt1)];
		}
	}
	if(cnt1>cnt2) {
		max=cnt1;
		min=cnt2;
		for(i=max-1;i>=0;i--){
			a=arr4[i]+arr1[i]+arr3[i+1]-48*2;
			if(a>9){
				arr3[i]++;
				arr3[i+1]=(a-10);
			}
			else {
				arr3[i+1]=a;
			}
		}
	}

	else {
		max=cnt2;
		min=cnt1;
		for(i=max-1;i>=0;i--){
			a=arr4[i]+arr2[i]+arr3[i+1]-48*2;
			if(a>9){
				arr3[i]++;
				arr3[i+1]=(a-10);
			}
			else {
				arr3[i+1]=a;
			}
		} 
	}
	if(arr3[0]!=0) printf("%d", arr3[0]);
	for(i=1;i<=max;i++){
		printf("%d", arr3[i]);
	}
	return 0;
}
