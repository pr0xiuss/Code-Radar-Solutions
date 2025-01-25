#include <stdio.h>

int main() {
    int y;
    scanf("%d",&y);
    if (y==1900){
        printf("Not a Leap Year");
    }else if (y%4==0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}