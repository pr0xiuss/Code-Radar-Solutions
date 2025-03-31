#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int oddc=0,evc=0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0) evc+=1;
        else oddc+=1;
    }
    printf("%d %d",evc,oddc);
    return 0;
}