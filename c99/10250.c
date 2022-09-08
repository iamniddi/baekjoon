#include <stdio.h>

int main(void){
	int H,W,N,T,num1,num2,i;
	scanf("%d", &T);
	
	for(i=0;i<T;i++){
		scanf("%d %d %d", &H,&W,&N);
		
		num1=N%H;
		num2=N/H+1;
		
		if(num1==0) {
			num1=H;
			num2--;
		}
		
		if(num2>=10) printf("%d%d\n",num1,num2);
		else printf("%d0%d\n",num1,num2);
	}
	return 0;
}
