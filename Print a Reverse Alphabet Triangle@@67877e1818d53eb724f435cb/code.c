#include <stdio.h>

int main() {
    int num;
    char c='A';
    for (int i=num;i>=1;i--){
        c='A';
        for (int j=1;j<=i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}