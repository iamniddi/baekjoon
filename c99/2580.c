#include <stdio.h>

int sudoku[9][9]={0};
int zeroArr[81][2]={0};
int cnt=0;

int check(int x, int y, int num){
	int i,j;
	for(i=0;i<9;i++){
		if(sudoku[i][x]==num){
			return 0;
		}
	}
	for(i=0;i<9;i++){
		if(sudoku[y][i]==num){
			return 0;
		}
	}
	int a=y/3,b=x/3;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(sudoku[i+a*3][j+b*3]==num) return 0;
		}
	}
	return 1;
}

int backTracking(int num){
	if(num==cnt) {
		printSudoku();
		cnt++;
		return 1;
	}
	int i, j, k;
	for(k=1;k<10;k++){
		if(check(zeroArr[num][1], zeroArr[num][0], k)==1){
			sudoku[zeroArr[num][0]][zeroArr[num][1]]=k;
			backTracking(num+1);
			sudoku[zeroArr[num][0]][zeroArr[num][1]]=0;
		}
	}
}

void printSudoku(){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			printf("%d ",sudoku[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			scanf("%d",&sudoku[i][j]);
			if(sudoku[i][j]==0){
				zeroArr[cnt][0]=i;
				zeroArr[cnt][1]=j;
				cnt++;
			}
		}
	}
	backTracking(0);
	return 0;
}

