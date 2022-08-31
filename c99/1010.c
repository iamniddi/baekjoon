#include <stdio.h>

int main(void) {
	long long N, M, sum = 1, num = 1;
	int T;
	scanf("%d", &T);
	for (int a = 0; a < T;a++) {
		scanf("%lld %lld", &N, &M);
		for (long long a = M;a > 0;a--) {
			if (a > M - N && a <= N) {
				continue;
			}
			if (a > M - N) {
				sum = sum * a;

			}
			if (a <= N) {
				num = num * a;
			}
		}
		printf("%lld\n", sum / num);
		sum = 1;
		num = 1;
	}
	return 0;
}