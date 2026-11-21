#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    int mid = n / 2;
    while (i < n) {
        int wing = (i <= mid) ? (i + 1) : (n - i);
        int gap = n - 2 * wing;
        int j = 0;
        while (j < wing) {
            printf("*");
            j++;
        }
        int s = 0;
        while (s < gap) {
            printf(" ");
            s++;
        }
        int k = 0;
        while (k < wing) {
            printf("*");
            k++;
        }

        printf("\n");
        i++;
    }
    return 0;
}