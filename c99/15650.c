#include <stdio.h>

int N, M;

int backTracking(int count,int num, int arr1[], int arr2[]) {
	int i, q;
	for (i = 0; i < N; i++) {
		if (arr1[i] == 0 && i+1>num) {
			//printf("%d(%d) ", i + 1, count);
			//if (count == 1) printf("%d %d\n", arr2[0], arr2[1]);
			arr1[i] = i+1;
			arr2[count] = i+1;
			backTracking(count+1,i+1, arr1,arr2);
			arr1[i] = 0;
			//if (count == M - 1) printf("1");
			if (count == M-1) {
				for (q = 0; q < M; q++) {
					printf("%d ", arr2[q]);
				}
				printf("\n");
			}
			//if (count == 1) printf("%d %d\n", arr2[0], arr2[1]);
		}
	}
}

int main(void) {
	int arr1[8] = {0}, arr2[8] = {0};
	scanf_s("%d %d", &N, &M);
	backTracking(0, 0, arr1, arr2);
}
