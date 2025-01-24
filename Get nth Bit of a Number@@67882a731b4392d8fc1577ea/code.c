#include <stdio.h>

int main() {
    int num,bit;
    scanf("%d %d",&num,&bit);
    if (num &(1<<bit)){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}