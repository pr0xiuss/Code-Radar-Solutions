#include <stdio.h>
#include <limits.h>

int main() {
    int num,pos;
    if (pos<0 || pos>=sizeof(int)*8){
        return 1;
    }
    int mask=~(1<<pos);
    num=num&mask;
    printf("%d",num);
    return 0;
}