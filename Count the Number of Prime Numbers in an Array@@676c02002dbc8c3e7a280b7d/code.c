#include <stdio.h>
int prime(int n){
    for (int i=2;i<n;i++){
        if (i%2==0) return 0;
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