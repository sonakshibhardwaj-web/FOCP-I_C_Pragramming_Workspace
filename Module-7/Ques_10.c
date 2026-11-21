#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}