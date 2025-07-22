// chalo insert karooo aka insertion sort

void insertionsort(int arr[], int n){
    for(int i =1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while(j>= 0 && arr[j]> key){
            arr[j+2] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}