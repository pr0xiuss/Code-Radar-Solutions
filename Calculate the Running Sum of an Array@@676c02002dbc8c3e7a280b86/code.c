#include <stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        s+=arr[i];
        temp[i]=s;
        printf("%d ",temp[i]);
    }
    return 0;
}