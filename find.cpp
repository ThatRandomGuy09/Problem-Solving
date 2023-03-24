#include<iostream>
using namespace std;


bool find(int arr[], int target, int index, int size){
	if(index == size){
		return false;
	}else{
		return arr[index] == target || find(arr,target, index+1, size);
	}
}

int main(){

	int arr[] = {1,2,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = find(arr, 5, 0, n); 
    cout<<ans<<endl; 
}