// heap sort involves building a max heap and then repeatedly extracting the maximum element

#include<bits/stdc++.h>
using namespace std:

void heapify(int arr[], int n, int i){
    int largest = i, left = 2 * i +1, right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;

    }
    if(right < n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}

void heapsort(int arr[], int n{
    for(int  i = n/2 - 1; i>=0; i--){
        heapify(arr, i, n);

        for(int i = n - 1; i>=0; i--){
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
}