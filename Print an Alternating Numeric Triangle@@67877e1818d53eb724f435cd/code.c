#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        int num=i%2;
        for (int j=1;j<=i;j++){
            printf("%d ",num);
            num =!num;
        }
        printf("\n");
    }
    return 0;
}