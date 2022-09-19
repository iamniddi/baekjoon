#include <stdio.h>

//a=97 .... y=121 z=122 26°³ 

int main(void){
	char stringArr[100];
	int alphabet[26]={0,};
	int cnt=0;
	int N,i,j, check, result=0;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%s", stringArr);
		
		for(j=0;j<26;j++){
			alphabet[j]=0;
		}
		
		while(stringArr[cnt]!=NULL){
			
			if(stringArr[cnt]==stringArr[cnt+1]) check = 1;
			else check=0;
			
			if(alphabet[(int)stringArr[cnt]-97]==0 && check==0){
				alphabet[(int)stringArr[cnt]-97]=1;
			}
			else if(alphabet[(int)stringArr[cnt]-97]==1){
				result++;
				break;
			}
			cnt++;
		}
		cnt=0;
	}
	printf("%d", N-result);
	return 0;
}
