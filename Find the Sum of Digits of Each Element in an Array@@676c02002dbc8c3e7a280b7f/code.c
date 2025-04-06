#include <stdio.h>
int sum(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp[i]=sum(arr[i]);
        printf("%d ",temp[i]);
    }
    return 0;
}