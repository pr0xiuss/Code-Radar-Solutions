#include <stdio.h>

int main() {
    int num,t=1;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}