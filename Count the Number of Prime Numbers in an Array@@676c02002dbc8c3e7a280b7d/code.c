#include <stdio.h>
int prime(int n){
    if(n<=1) return 0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,c=0;
    scanf("%d ",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (prime(arr[i])) c++;
    }
    printf("%d",c);
    return 0;
}