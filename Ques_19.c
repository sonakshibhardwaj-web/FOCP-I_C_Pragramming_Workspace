#include <stdio.h>
int main(){
    int a[10][10], r, c;
    int i, j, x, y, count = 0;
    int flag;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            flag = 1;
            for (x = i - 1; x <= i + 1; x++){
                for (y = j - 1; y <= j + 1; y++){
                    if (x >= 0 && x < r &&
                        y >= 0 && y < c &&
                        (x != i || y != j)){
                        if (a[i][j] <= a[x][y])
                            flag = 0;
                    }
                }
            }

            if (flag == 1)
                count++;
        }
    }
    printf("Number of local peaks = %d", count);
    return 0;
}