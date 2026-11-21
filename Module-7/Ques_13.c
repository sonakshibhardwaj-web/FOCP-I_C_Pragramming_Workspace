#include <stdio.h>
int main(void) {
    int i = 0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while (i < n) {
        int j = 0;
        while (j < n) {
            if ((i + j) % 2 == 0) {
                printf("X");
            } else {
                printf("O");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}