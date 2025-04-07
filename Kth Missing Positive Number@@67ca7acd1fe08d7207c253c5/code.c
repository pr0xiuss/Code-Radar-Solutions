int findKthMissing(int arr[],int n.int k){
    int miss=0,cur=1,i=0;
    while(1){
        if(i<n && arr[i]==cur) i++;
        else{
            miss++;
            if(miss==k) return cur;
        }
        cur++;
    }
}