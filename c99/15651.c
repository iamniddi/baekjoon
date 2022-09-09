#include <stdio.h>

int N, M;

void backTracking(int count, int arr[]) {
	int i, q;
	for (i = 0; i < N; i++) {
		if (count == M) {
			for (q = 0; q < M; q++) {
				printf("%d ", arr[q]+1);
			}
			printf("\n");
			return;
		}
		arr[count] = i;
		backTracking(count + 1, arr);
	}
}

int main(void) {
	int arr[8] = { 0 };

	scanf_s("%d %d", &N,&M);
	backTracking(0, arr);
}