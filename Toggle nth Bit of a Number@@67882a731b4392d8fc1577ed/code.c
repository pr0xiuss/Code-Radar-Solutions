#include <stdio.h>

unsigned int tog(unsigned int num,int pos){
    unsigned int mask=1<<pos;
    return num^mask;
}
int main() {
    unsigned int num
    int pos;
    scanf("%d %d",&num,&pos);
    unsigned int res=tog(num,pos);
    printf("%d",res);
    return 0;
}