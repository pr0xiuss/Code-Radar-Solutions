#include <stdio.h>

int main() {
    int num,pos,res;
    scanf("%d %d",&num,&pos);
    res=num|(1<<pos);
    printf("%d",res);
    return 0;
}