#include <stdio.h>

int bit(int num, int pos){
    if (pos<0 || pos>=32){
        return num;
    }else{
        return num & ~(1<<pos);
    }
}
int main() {
    int num,pos,res;
    res=bit(num,pos);
    printf("%d",res);
    return 0;
}