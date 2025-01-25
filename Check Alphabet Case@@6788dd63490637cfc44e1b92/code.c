#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    if (65<=x<=91){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}