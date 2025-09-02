#include <stdio.h>

int main() {
    int NUM;

    printf("put number: ");
    scanf("%d", &NUM);

    for (int i = NUM; i >= 2; i--) {
        int j;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i / 2) {
            printf("%d ", i);
        
        }
    return 0;
}

