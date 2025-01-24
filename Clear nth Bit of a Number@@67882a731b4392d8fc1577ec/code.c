#include <stdio.h>

unsigned int bitt(unsigned int num,int pos){
    unsigned int mask=1<<pos;
    if (num & mask){
        num^=mask;
    }return num;
}
int main() {
    unsigned int num,pos,res;
    scanf("%d %d",&num,&pos);
    res=bitt(num,pos);
    printf("%d",res);
    return 0;
}