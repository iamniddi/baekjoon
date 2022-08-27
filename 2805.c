#include <stdio.h>
/*int treeCut(int H, int N, int* treeH, int M) {
	long long sum = 0;
	for (int a = 0; a < N; a++) {
		if (treeH[a] > H) {
			if (sum > M) break;
			sum = sum + (treeH[a] - H);
		}
	}
	if (sum > M) return 0;
	else if (sum < M) return 1;
	else return 2;
}

int main(void) {
	int N, M, bigNum = 0, smallNum = 0, tmp = 0;
	scanf_s("%d %d", &N, &M);

	int * treeH = malloc(sizeof(int) * N);

	for (int a = 0; a < N; a++) {
		scanf_s("%d", &treeH[a]);
		if (bigNum < treeH[a]) bigNum = treeH[a];
	}

	for (int a = 0; a < bigNum; a++) {
		if (treeCut((bigNum - tmp) / 2 + tmp, N, treeH, M)==0) {
			tmp = (bigNum - tmp) / 2 + tmp;
		}
		else if (treeCut((bigNum - tmp) / 2 + tmp, N, treeH,M)==1) {
			bigNum = (bigNum - tmp) / 2 + tmp;
		}
		else {
			tmp = (bigNum - tmp) / 2 + tmp;
		}
	}

	printf("%d\n", tmp);

	free(treeH);
	return 0;
}*/

int main(void) {
	long long sum;
	int N, M, bigNum = 0, l = 0, tmp = 0, treeH[100000];
	//printf("1\n");
	scanf_s("%d %d", &N, &M);
	for (int a = 0; a < N; a++) {
		scanf_s("%d", &treeH[a]);
		if (bigNum < treeH[a]) bigNum = treeH[a];
	}
	while (l < bigNum) {
		sum = 0;
		tmp = (bigNum + l+1) / 2;
		for (int a = 0; a < N; a++) {
			if (treeH[a] > tmp) {
				sum = sum + (treeH[a] - tmp);
			}
		}
		if (sum < M) {
			bigNum = tmp - 1;
		}
		else {
			l = tmp;
		}
	}

	printf("%d\n", l);
	return 0;
}