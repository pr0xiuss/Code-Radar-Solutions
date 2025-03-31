#include <stdio.h>
int main(){
    int n;
    scanf("%dd",&n);
    int arr[n],hash[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]=1;
    }
    int longest=0,curr=0;
    for (int i=0;i<100;i++){
        if(hash[i]){
            curr++;
            if(curr>longest) longest=curr;
            else curr=0;
        }
    }
    printf("%d",longest);
    return 0;
}