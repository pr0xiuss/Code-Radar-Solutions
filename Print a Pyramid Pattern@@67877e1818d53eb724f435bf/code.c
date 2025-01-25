#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=0;i<=num;i++){
        for (int j=i;j<num;j++){
            printf(" ");
        }for (int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
        }
    }
    return 0;
