#include <stdio.h>

int main() {
    int N = 5;
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
