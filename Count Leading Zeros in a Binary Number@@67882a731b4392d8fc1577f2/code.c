#include <stdio.h>

int cc(unsigned int num){
    int c=0;
    unsigned int mask= 1 << 31;
    while ((mask &num)==0 && c < 32){
        c++;
        mask >>=1;
    }
    return c;
}
int main() {
    unsigned int num;
    scanf("%u",&num);
    printf("%d",cc(num));
    return 0;
}