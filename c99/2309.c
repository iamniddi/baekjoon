#include <stdio.h>

int main(void) {
    int man[9] = {13,1,4,5,6,8,9,7,2}, save1, save2, save3, sum = 0, k;
    for (int a = 0; a < 9; a++) {
        scanf_s("%d", &man[a]);
    }
    for (int a = 0; a < 9; a++) {
        for (int b = 0; b < 9; b++) {
                if (a != b) {
                    save1 = man[a];
                    save2 = man[b];
                    man[a] = 0;
                    man[b] = 0;
                    for (int d = 0; d < 9; d++) {
                        sum = sum + man[d];
                    }
                    if (sum == 100) {
                        break;
                    }
                    else {
                        sum = 0;
                        man[a] = save1;
                        man[b] = save2;
                }
            }
        }
        if (sum == 100) break;
    }
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 8; b++) {
            if (man[b] < man[b+1]) {
                k = man[b];
                man[b] = man[b + 1];
                man[b + 1] = k;
            }
        }
    }
    for (int a = 6; a >=0; a--) {
        printf("%d\n", man[a]);
    }
}