#include <stdio.h>
int main(){
    int a[10][10], r, c, i, j;
    int k, min, flag = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < r; i++){
        min = a[i][0];
        k = 0;
        for (j = 1; j < c; j++){
            if (a[i][j] < min){
                min = a[i][j];
                k = j;
            }
        }
        for (j = 0; j < r; j++){
            if (a[j][k] > min)
                break;
        }
        if (j == r){
            printf("Saddle point = %d", min);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("No saddle point found");
    return 0;
}