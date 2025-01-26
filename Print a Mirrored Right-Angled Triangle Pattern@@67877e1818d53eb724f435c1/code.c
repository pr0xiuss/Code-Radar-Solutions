#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=1;int<=num;i++){
        for (int j=num;j>i;j--){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}