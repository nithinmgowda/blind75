int binarysearch(int arr[], int n, int target){
    int left = 0, right = n-1;
    while(left <=right){
        int mid=left+(right-left)/2;
        if(arr[mid]== target)
            return mid;
        if(arr[mid]<target)
        left = mid+1;
        else
        right=mid-1;
        
    }
    return -1;
}