#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    int total_rows = 2 * n - 1;
    while (i < total_rows) {
        int level = (i < n) ? i : (total_rows - 1 - i);
        int spaces = n - level - 1;
        int stars = 2 * level + 1;
        int s = 0;
        while (s < spaces) {
            printf(" ");
            s++;
        }
        int j = 0;
        while (j < stars) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}