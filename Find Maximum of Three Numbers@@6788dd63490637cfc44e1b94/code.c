#include <stdio.h>

int main() {
    int x,y,z,res;
    scanf("%d %d %d",&x,&y,&z);
    res= (x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("%d",res);
    return 0;
}