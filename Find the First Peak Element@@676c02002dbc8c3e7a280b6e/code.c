#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n-1;i++){
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}