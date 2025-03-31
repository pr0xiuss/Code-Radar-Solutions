#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int isorted=1;
    for (int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            isorted=0;
            break;
        }
    }
    if (isorted) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}