#include <stdio.h>
int pal(int n){
    int og,rev=0,rem;
    og=n;
    while (n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(og==rev) return 1;
    else return 0;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(pal(arr[i])) c++;
    }
    printf("%d",c);
    return 0;
}