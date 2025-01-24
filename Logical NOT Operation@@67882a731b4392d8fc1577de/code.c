#include <stdio.h>

int main() {
    int x;
    scnaf("%d",&x);
    if (x>0){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}