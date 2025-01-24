#include <stdio.h>

int bit(int num, int pos){
    return num & ~(1<<pos);
}
int main() {
    int num,pos,res;
    res=bit(num,pos);
    printf("%d",res);
    return 0;
}