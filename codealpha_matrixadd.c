#include <stdio.h>

void read(int a[2][2], int r, int c);
void add(int a[2][2], int b[2][2], int sum[2][2], int r, int c);
void display(int a[2][2], int r, int c);

int main() {
    int r, c;
    int A[2][2], B[2][2], Sum[2][2];

    printf("Enter rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter Matrix A:\n");
    read(A, r, c);

    printf("Enter Matrix B:\n");
    read(B, r, c);

    add(A, B, Sum, r, c);

    printf("Sum of matrices:\n");
    display(Sum, r, c);

    return 0;
}

void read(int a[10][10], int r, int c) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}

void add(int a[10][10], int b[10][10], int sum[10][10], int r, int c) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
}

void display(int a[10][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
