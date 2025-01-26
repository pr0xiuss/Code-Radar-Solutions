#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=1;int<num;i++){
        for (int j=num;j>=0;j--){
            if (j>i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}