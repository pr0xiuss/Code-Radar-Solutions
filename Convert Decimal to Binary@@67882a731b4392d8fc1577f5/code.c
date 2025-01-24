#include <stdio.h>

void dtob(int num){
    int binary[32],index=0;
    while (num>0){
        binary[index++]=num%2;
        num/=2;
    }
    for (int i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }
}

int main() {
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}