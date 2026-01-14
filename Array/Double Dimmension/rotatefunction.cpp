#include <stdio.h>
int input(int s, int e) {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n <= e && n >= s) return n;
        printf("Invalid input!\n");
    }
}
void left(int arr[20][20], int* r, int* c, int num[20][20]) 
{
    int a;
    printf("Enter the number of times to rotate: ");
    scanf("%d", &a);
    while (a--) {
        for (int i = 0; i < *r; i++) {
            for (int j = 0; j < *c; j++) {
                num[*c - j - 1][i] = arr[i][j];
            }
        }
        int temp = *r;
        *r = *c;
        *c = temp;
        for (int i = 0; i < *r; i++) {
            for (int j = 0; j < *c; j++) {
                arr[i][j] = num[i][j];
            }
        }
    }
}
void right(int arr[20][20], int* r, int* c, int num[20][20]) 
{
    int a;
    printf("Enter the number of times to rotate: ");
    scanf("%d", &a);
    while (a--) {
        for (int i = 0; i < *r; i++) {
            for (int j = 0; j < *c; j++) {
                num[j][*r - i - 1] = arr[i][j];
            }
        }
        int temp = *r;
        *r = *c;
        *c = temp;
        for (int i = 0; i < *r; i++) {
            for (int j = 0; j < *c; j++) {
                arr[i][j] = num[i][j];
            }
        }
    }
}
void display(int arr[20][20], int r, int c) 
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%-3d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void copyMatrix(int s[20][20], int d[20][20], int r, int c) 
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            d[i][j] = s[i][j];
        }
    }
}
int main() {
    int o[20][20], arr[20][20], num[20][20];
    int r, c;
    printf("Enter row: ");
    r = input(2, 20);
    printf("Enter column: ");
    c = input(2, 20);
    printf("Enter the elements\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &o[i][j]);
        }
    }
    printf("Actual matrix\n");
    display(o, r, c);
    copyMatrix(o, arr, r, c);
    printf("Rotate 90 degree left\n");
    left(arr, &r, &c, num);
    display(arr, r, c);
    copyMatrix(o, arr, r, c); 
    printf("Re-Enter the same row and column\n");
    r = input(2, 20); 
    c = input(2, 20); 
    int oR = r, oC = c; 
    printf("Rotate 90 degree right\n");
    right(arr, &r, &c, num);
    display(arr, r, c);
}
