#include <stdio.h>
/*
int arr[101][101] = { 0, };
int visited[101][101] = { 0, };

struct point2D {
	int x;
	int y;
};

int main(void) {
	struct point2D queue[10000] = {0,};
	int N, M;
	int front = 0, rear = 0, qs = 0, x = 0, y = 0, r = 1;
	scanf_s("%d %d", &N, &M);
	for (int a = 0; a < N; a++) {
		for (int b = 0; b < M; b++) {
			scanf_s("%d", &arr[a][b]);
		}
	}
	queue[front].x = 0;
	queue[front].y = 0;
	arr[0][0] = 2;
	rear++;
	while (front < rear) {
		x = queue[front].x;
		y = queue[front].y;
		front++;
		arr[x][y] = 0;
		if (x < N - 1 && arr[x + 1][y] == 1) {
			queue[rear].x = x + 1;
			queue[rear].y = y;
			arr[x + 1][y] = arr[x][y] + 1;
			rear++;
		}
		if (y < M - 1 && arr[x][y + 1] == 1) {
			//arr[x][y] = r;
			queue[rear].x = x;
			queue[rear].y = y + 1;
			arr[x][y + 1] = arr[x][y] + 1;
			rear++;
		}
		if (x > 0 && arr[x - 1][y] == 1) {
			//arr[x][y] = r;
			queue[rear].x = x - 1;
			queue[rear].y = y;
			arr[x - 1][y] = arr[x][y] + 1;
			rear++;
		}
		if (y > 0 && arr[x][y - 1] == 1) {
			//arr[x][y] = r;
			queue[rear].x = x;
			queue[rear].y = y - 1;
			arr[x][y - 1] = arr[x][y] + 1;
			rear++;
		}
	}
	printf("%d\n", arr[N - 1][M - 1] - 1);
	return 0;
}*/
//0<N,M<30
int main(void) {
	long long N, M, sum=1, num=1,r;
	int T;
	scanf_s("%d", &T);
		for (int a = 0; a < T;a++) {
			scanf_s("%lld %lld", &N, &M);
			for (long long a = M;a > 0;a--) {
				if (a > M - N && a <= N) {
					printf("%d\n", a);
					continue;
				}
				if (a > M - N) { 
					sum = sum * a; 
					
				}
				if (a <= N) { 
					num = num * a; 
				}
				/*if (a != r) {
					sum = sum * a;
					num = num * r;
				}*/
			}
			//for (long long b = N - 1;b > 0;b--) {
				//num = num * b;
			//}
			printf("%lld\n", sum );
			printf("%lld\n", num);
			printf("%lld\n", sum / num);
			sum = 1;
			num = 1;
		}
	return 0;
}