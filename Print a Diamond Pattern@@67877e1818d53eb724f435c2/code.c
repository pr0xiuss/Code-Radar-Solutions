#include <stdio.h>

void ptn(int num){
    int i,j;
    for(i=1;i<=num;i++){
        for (j=i;j<num;j++){
            printf(" ");
        }
        for (j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for (i=num-1;i>=1;i--){
        for (j=num;j>i;j--){
            printf(" ");
        }
        for (j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d",&num);
    ptn(num);
    return 0;
}