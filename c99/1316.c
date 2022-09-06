#include <stdio.h>

int queue[1000]={0}, front=0,rear=0;

void push(int x){
	queue[rear]=x;
	rear++;
}

int pop(){
	if(front!=rear){
		int tmp = queue[front];
		queue[front]=0;
		front++;
		return tmp;
	}
	else {
		return -1;
	}
}

int size(){
	return rear-front;
}

int empty(){
	if(front==rear){
		return 1;
	}
	else{
		return 0;
	}
}

int front_(){
	if(empty()==0){
		return queue[front];
	}
	else{
		return -1;
	}
}

int back_(){
	if(empty()==0){
		return queue[rear-1];
	}
	else{
		return -1;
	}
}

int main(void){
	int T, a,b,num1, count=0;
	char arr[20]={0}, numArr[8]={0};
	scanf("%d", &T);
	for (a=0; a< T; a++){
		scanf("%s", arr);
		if(arr[0]=='p'&&arr[1]=='u'){
			scanf("%d", &num1);
			push(num1);
		}
		
		else if(arr[0]=='p'&&arr[1]=='o'){
			printf("%d\n", pop());
		}
		else if(arr[0]=='f'){
			printf("%d\n", front_());
		}
		else if(arr[0]=='b'){
			printf("%d\n", back_());
		}
		else if(arr[0]=='e'){
			printf("%d\n", empty());
		}
		else if(arr[0]=='s'){
			printf("%d\n", size());
		}
	}
	
	return 0;
}
