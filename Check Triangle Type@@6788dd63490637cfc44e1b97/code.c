#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x==y &&x==z){
        printf("Equilateral");
    }else if(x==y||y==z||x==z){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}