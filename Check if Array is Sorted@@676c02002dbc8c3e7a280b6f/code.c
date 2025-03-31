#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size],temp[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),compare);
    int isorted=1;
    for (int i=0;i<size;i++){
        if(arr[i]!=temp[i]){
            isorted=0;
            break;
        }
    }
    if (isorted) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}