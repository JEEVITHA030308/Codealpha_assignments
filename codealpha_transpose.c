#include <stdio.h>

void read(int a[2][2], int r, int c);
void transpose(int a[2][2], int t[2][2], int r, int c);
void display(int a[2][2], int r, int c);

int main() {
    int r, c;
    int A[2][2], T[2][2];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    read(A, r, c);
    transpose(A, T, r, c);
    printf("Transpose of the matrix:\n");
    display(T, c, r); 

    return 0;
}

void read(int a[2][2], int r, int c) {
    for(int i = 0; i < r; i++)
    {
    for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
}

void transpose(int a[2][2], int t[2][2], int r, int c) {
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            t[j][i] = a[i][j];
    }
}

void display(int a[2][2], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}