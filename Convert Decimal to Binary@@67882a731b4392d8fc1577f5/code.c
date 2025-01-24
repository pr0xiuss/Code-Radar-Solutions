#include <stdio.h>

void dtob(int num){
    if (num>1){
        dtob(num/2);
    }
    printf("%d",num%2);
}
int main() {
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}