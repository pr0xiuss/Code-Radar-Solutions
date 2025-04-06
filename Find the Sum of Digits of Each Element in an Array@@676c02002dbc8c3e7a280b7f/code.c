#include <stdio.h>
#include <stdlib.h>
int sum(int n){
    int s=0,x=abs(n);
    
    while(x!=0){
        s+=x%10;
        x/=10;
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