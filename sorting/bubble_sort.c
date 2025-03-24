int bubbleSort(int arr[], int n){

    for(int i = 0;i < n-1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int print(int arr[], int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int arr[] = {2,6,3,9,5,1,8,4};

    int n = 8;

    bubbleSort(arr,n);

    print(arr,n);

    return 0;
}