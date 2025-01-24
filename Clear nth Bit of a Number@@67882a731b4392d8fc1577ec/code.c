#include <stdio.h>

int bit(int num, int pos){
    int mask=~(1<<pos);
    return num & mask
}
int main() {
    int num,pos,res;
    res=bit(num,pos);
    printf("%d",res);
    return 0;
}