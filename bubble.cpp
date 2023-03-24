#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n, int r, int c){
    if(r==0){
        return;
    } 
    else if(c<r){
        if(arr[c]>arr[c+1]){
            int temp = arr[c];
            arr[c]=arr[c+1];
            arr[c+1]= temp;
        }
        bubbleSort(arr,n,r, c+1);
    }else{
        bubbleSort(arr,n,r-1, 0);
    }
}

int main(){
    int arr[] = {4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n, n-1, 0);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}