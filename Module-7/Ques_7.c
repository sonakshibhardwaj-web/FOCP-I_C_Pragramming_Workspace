#include <stdio.h>

int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while (i < n) {
        int s = 0;
        while (s < n - i - 1) {
            printf(" ");
            s++;
        }
        int j = 0;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}