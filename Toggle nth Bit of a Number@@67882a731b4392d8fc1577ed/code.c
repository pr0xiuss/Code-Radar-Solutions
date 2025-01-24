#include <stdio.h>

unsigned int tog(unsigned int num,pos){
    unsigned int mask=1<<pos;
    return num^mask;
}
int main() {
    unsigned int num,pos,res;
    scanf("%d %d",&num,&pos);
    res=tog(num,pos);
    printf("%d",res);
    return 0;
}