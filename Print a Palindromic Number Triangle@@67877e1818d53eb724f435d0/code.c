#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int s=1;s<=num-1;s++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }for (int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}