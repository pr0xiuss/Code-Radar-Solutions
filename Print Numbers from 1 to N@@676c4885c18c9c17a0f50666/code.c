#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if (num==1){
        printf("1");
    }else{
        for (int i=1;i<=num;i++){
            printf("%d",i);
            }
    }
    return 0;
}