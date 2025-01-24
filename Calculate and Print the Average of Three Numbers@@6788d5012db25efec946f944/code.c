#include <stdio.h>

int main(){
    int x,y,z;
    float av;
    scanf("%d %d %d",&x,&y,&z);
    av=(x+y+z)/3.0;
    printf("Average: %.2f",av);
    return 0;
}