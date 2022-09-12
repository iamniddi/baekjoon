#include <stdio.h>

int chess[15][15] = {0};
int N, result=0,c=0;

int checkAttack(int x, int y) {
   int i, q, smallNum, bigNum,saveX,saveY;
   for (i = 0; i < N; i++) {
      if (chess[y][i]==1) {
         return 1;
      }
   }
   for (i = 0; i < N; i++) {
      if (chess[i][x] == 1) {
         return 1;
      }
   }//4,3
   if (x > y) {
      smallNum = y;
      saveX = x - smallNum;
      saveY = y - smallNum;
      i = 0;
      while (saveX + i < N && saveY + i < N) {
         
         if (chess[saveY + i][saveX + i] == 1) {
            return 1;
         }
         i++;
      }
   }
   else {
      smallNum = x;
      saveX = x - smallNum;
      saveY = y - smallNum;
      i = 0;
      while (saveX + i < N && saveY + i < N) {
         
         if (chess[saveY + i][saveX + i] == 1) {
            return 1;
         }
         i++;
      }
   }
   if (y > N-1 - x) {
      smallNum = N-1 - x;
      saveX = x + smallNum;
      saveY = y - smallNum;
      
   }
   else {
      smallNum = y;
      saveX = x + smallNum;
      saveY = y - smallNum;
   }
   i = 0;
   while (saveX - i < N && saveY + i < N) {
      
      if (chess[saveY + i][saveX - i] == 1) {
         return 1;
      }
      i++;
   }
   return 0;
}

void printArr(){
	int i,q;
	for (i = 0; i < N; i++) {
		for (q = 0; q < N; q++) {
			if(chess[i][q]==0){
				printf("%d ", 0);
			}
			else {
				printf("%d ", 1);
			}
		}
		printf("\n");
	}
	printf("\n");
}

void backTracking(int count, int cut1, int cut2) {
	int i, q;
	if(count==N){
		result++;
		//printArr();
		return;
	}
	for (i = cut1; i < N; i++) {
		if(cut1>i || cut2>q) continue;
		for (q = 0; q < N; q++) {
			printf("%d %d\n", i,q);
			if(chess[i][q]==0 && checkAttack(q,i)==0){
				chess[i][q]=1;
				printf("üũ,(%d)\n", count);
				backTracking(count+1,i,q);
				chess[i][q]=0;
			}
		}
	}
}

int main(void) {
	scanf("%d", &N);
	backTracking(0,0,0);
	printf("%d", result);
	
	return 0;
}
