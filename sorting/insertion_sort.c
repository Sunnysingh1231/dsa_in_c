#include <stdio.h>;


void insertionSort(int arr[], int n){

    for(int i = 1;i < n;i++){

        int key = arr[i];

        int j = i-1;

        while(arr[j] > key && j>=0){

            arr[j+1] = arr[j];

            j--;

        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int arr[] = {2,6,3,9,5,1,8,4};

    int n = 8;

    insertionSort(arr,n);

    print(arr,n);

    return 0;
}