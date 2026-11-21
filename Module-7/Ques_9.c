#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while (i < n) {
        int s = 0;
        while (s < i) {
            printf(" ");
            s++;
        }
        int j = 0;
        while (j < 2 * (n - i) - 1) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}