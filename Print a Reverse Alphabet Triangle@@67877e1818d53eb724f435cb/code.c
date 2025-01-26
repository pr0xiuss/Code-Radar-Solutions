#include <stdio.h>

int main() {
    int num;
    char ch='A';
    for (int i=num;i>=1;i--){
        ch='A';
        for (int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}