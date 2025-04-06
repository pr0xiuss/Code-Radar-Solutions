#include <stdio.h>
int main(){
    int n,mid=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2!=0) mid=arr[n/2];
    else{
        mid=(arr[n/2 -1]+arr[n/2])/2;
    }
    printf("%d",mid);
    return 0;
}