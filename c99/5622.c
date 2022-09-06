#include <stdio.h>

int main(void){
	char arr1[16]={0};
	char arr2[16]={0};
	int count=0,sum=0,num,a;
	scanf("%s", arr1);
	while(arr1[count]!=NULL){
		count++;
	}
	for (a=0; a<count;a++){ 
		num=(int)arr1[a];
		if(79>=num){
			arr2[a]=((num-65)/3)+2;
		}
		else if(83>=num && num>79){
			arr2[a]=7;
		}
		else if(86>=num && num>83){
			arr2[a]=8;
		}
		else{
			arr2[a]=9;
		}
	}
	for (a=0; a<count;a++){ 
		printf("%d ", arr2[a]);
	}
	printf("\n");
	for (a=0; a<count;a++){
		sum+=arr2[a]+1;
	}
	printf("%d", sum);
	
	return 0;
}
