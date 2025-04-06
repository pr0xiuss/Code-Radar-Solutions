#include <stdio.h>
int main(){
    int n,inc=1,dec=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) dec=0;
        else if(arr[i]<arr[i-1]) inc=0;
    }
    if(inc || dec) printf("YES");
    else printf("N0");
    return 0;
}