#include <stdio.h>

//0 == 1 0 
//1 == 0 1
//2 == 1 1
//3 == 1 2
//4 == 2 3
//5 == 3 5
//6 == 5 8

int main(void) {
	int T, num, a = 0, b = 0, c;// zeroCount=0, oneCount = 0;
	scanf_s("%d", &T);
	while (T > 0) {
		T--;
		scanf_s("%d", &num);
		for (int i = 0; i < num + 1; i++) {
			if (i == 0) {
				a = -1;
				b = 1;
			}
			else if (i == 1) {
				a = 1;
				b = 0;
			}
			else {
				c = b;
				b = a + b;
				a = c;
			}
		}
		printf("%d %d\n", b, b + a);
	}
}