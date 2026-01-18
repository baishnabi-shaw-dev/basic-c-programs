#include <stdio.h>

int main() {
    int i, j;
    int num = 1;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int r = i;
            int c = j;
            int k, value = 1;

            // Calculate diagonal index
            int diag = r + c;

            // Calculate how many numbers before this diagonal
            for (k = 0; k < diag; k++) {
                if (k < 4) {
                    value += k + 1;
                } else {
                    value += 4;
                }
            }

            // Add position within the diagonal
            if (diag < 4) {
                value += r;
            } else {
                value += 3 - c;
            }

            printf("%2d ", value);
        }
        printf("\n");
    }

    return 0;
}
/*
 1  2  4  7
 3  5  8 11
 6  9 12 15
10 13 16 19
*/