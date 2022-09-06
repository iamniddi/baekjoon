#include <stdio.h>

int main(void){
	char arr1[101]={0};
	int count=0,sum=0, a;
	scanf("%s", arr1);
	while(arr1[count]!=NULL){
		count++;
	}
	sum=count;
	for(a=0; a< count; a++){
		if(a>=2 && arr1[a]=='=' && arr1[a-1]=='z' && arr1[a-2]=='d'){
			sum-=2;
		}
		else if(a>=1 && arr1[a]=='j' && arr1[a-1]=='l'){
			sum--;
		}
		else if(a>=1 && arr1[a]=='j' && arr1[a-1]=='n'){
			sum--;
		}
		else if(arr1[a]=='='){
			sum--;
		}
		else if(arr1[a]=='-'){
			sum--;
		}
	}
	printf("%d", sum);
	
	return 0;
}

