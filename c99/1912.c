#include <stdio.h>

int arr[10000000]={0,};
int count=-1,max=-1000;
 
//void dp(){
//	int i,j, num, a=1, b=0,c;
//	num=count;
//	a=count/2;
//	b=3;
//	c=0;
//	while(count!=1){
//		for(i=0;i<a;i++){
//			count Á¶ÀÛ
//			for(j=0;j<b;j++){
//				arr[count]+=arr[c+j];
//			}
//			count++;
//			c++;
//		}
//		a--;
//	}
//}

void dp(){
	if(count==1) {
		printf("%d", max);
		return;
	}
	int cnt=0;
	int data[10000000]={0,};
	int a=count/2;
	int start=0;
	int num=3,i,j;
	printf("%d %d", a,count);
	while(a>0){
		printf("1\n");
		for(j=0; j<a;j++){
			for(i=0;i<num;i++){
				data[cnt]+=arr[start+i];
			}
			if(data[cnt]>max){
				max=data[cnt];
			}
			cnt++;
			start+=(num-1);
		}
		a-=1;
		num+=2;
	}
	printf("%d", max);
	return;
}

int main(void){
	int n, k, i, status=1,sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &k);
		if(count==-1 && 0>k) {
			if(k>max) max = k;
			if(i==n-1){
				printf("%d", max);
				return 0;
			}
			//printf("%d", k);
			continue;
		}
		//printf("%d", k);
		if(k>=0 && status==0){
			arr[count]=sum;
			count++;
			sum=k;
			status=1;
		}
		else if(0>k&& status==1){
			if(sum>max){
				max=sum;
			}
			arr[count]=sum;
			count++;
			sum=k;
			status=0;
		}
		else if(k>=0 && status==1) {
			sum+=k;
			if(count==-1) count++;
		}
		else if(0>k && status==0){
			sum+=k;
		}
		
		if(i==n-1&&status==1){
			if(sum>max){
				max=sum;
			}
			arr[count]=sum;
			count++;
			
			if(count==1||count==0){
				printf("%d", max);
				return 0;
			}
		}
//		else if(i==n-1&&count==0){
//			printf("%d", max);
//			return 0;
//		}
	}
	for(i=0;i<count;i++){
		printf("(%d) ", arr[i]);
	}
	//printf("\n%d", max);
	//dp();
	return 0;
}
