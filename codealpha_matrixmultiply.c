#include <stdio.h>

void read(int a[2][2], int r, int c);
void multiply(int a[2][2], int b[2][2], int mul[2][2], int r1, int c1, int c2);
void display(int a[2][2], int r, int c);

int main() {
    int r1, c1, r2, c2;
    int A[2][2], B[2][2], Mul[2][2];
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter Matrix A:\n");
    read(A, r1, c1);
    printf("Enter Matrix B:\n");
    read(B, r2, c2);
    multiply(A, B, Mul, r1, c1, c2);
    printf("Product of matrices:\n");
    display(Mul, r1, c2);
    return 0;
}

void read(int a[2][2], int r, int c) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}

void multiply(int a[2][2], int b[2][2], int mul[10][10], int r1, int c1, int c2) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void display(int a[2][2], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}