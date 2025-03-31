#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }

    int first=arr[0];
    int res=-1;
    for (int i=0;i<n;i++){
        if (arr[i]>first){
            first=arr[i];
        }
    }
    for (int i=0;i<n;i++){
        if (arr[i]>res && arr[i]<first){
            res=arr[i];
        }
    }
    printf("%d",res);
    return 0;
}