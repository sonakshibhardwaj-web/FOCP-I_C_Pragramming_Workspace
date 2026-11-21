#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", (i + 1) * (j + 1));
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}