#include <stdio.h>

int main() {
    int num,i=2;
    scanf("%d",&num);
    if (num==1){
        printf("Not Prime");
    }
    while(i<=num-1){
        if (num%i==0){
            printf("Not Prime");
            break;
        }
        i++;
    }
    if (i==num){
        printf("Prime");
    }
    return 0;
}