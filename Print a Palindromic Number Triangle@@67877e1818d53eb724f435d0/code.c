#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i;i<=num;i++){
        printf(" "*(num-i));
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }for (int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}