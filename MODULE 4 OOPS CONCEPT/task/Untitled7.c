#include <stdio.h>

void sierpinski(int n, int x, int y, char (*arr)[1024]) {
    if (n == 1) {
        arr[y][x] = '*';
        return;
    }

    int step = 1 << (n - 2);
    sierpinski(n - 1, x, y, arr);
    sierpinski(n - 1, x + step, y, arr);
    sierpinski(n - 1, x + step / 2, y + step, arr);
}

int main() {
    int i,j,n = 5; // The depth of the Sierpinski triangle
    char arr[1024][1024] = {0};
    sierpinski(n, 0, 0, arr);

    int rows = 1 << (n - 1);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows * 2 - 1; j++) {
            if (arr[i][j]) {
                printf("%c", arr[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

