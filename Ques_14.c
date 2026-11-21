#include <stdio.h>
int main(){
    char str[100];
    int i, v = 0, c = 0, d = 0, s = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= '0' && str[i] <= '9')
            d++;
        else if (str[i] == ' ')
            s++;
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z')){
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d\n", s);
    return 0;
}