#include <stdio.h>

int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);

    int num = 1;
    while (i < n) {
        int j = 0;
        while (j <= i) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}