int selectionSort(int arr[], int n){

    for(int i = 0;i < n-1; i++){

        int mi = i;
        for(int j = i+1;j < n;j++){
            if(arr[j] < arr[mi]){
                mi = j;
            }
        }
        int temp = arr[mi];
        arr[mi] = arr[i];
        arr[i] = temp;

    }
}

int print(int arr[], int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}



int main(){

    int arr[] = {2,6,3,9,5,1,8,4,0};

    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    print(arr,n);

    return 0;
}