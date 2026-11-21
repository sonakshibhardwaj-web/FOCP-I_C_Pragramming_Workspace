#include <stdio.h>
int main(){
    int start, end, n, count = 0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = start; i <= end; i++){
        if (i % n == 0){
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}