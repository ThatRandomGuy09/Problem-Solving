#include<iostream>
using namespace std;

int Search( int *arr, int target){
	int start =0; 
	int end = sizeof(arr) - 1;

	while(start <= end){
		int mid = start + (end - start) / 2;


		if (target < arr[mid]) {

			end = mid - 1;
		} else if (target > arr[mid]) {
			start = mid + 1;
		} else {
			return mid;
		}
	}

	return start;

}



int main(void){

	int arr[] = {2,3,5,9,14,16,18};
	int target = 15;
	int ans = Search( arr, target);
	 int n = sizeof(arr) / sizeof(arr[0]);
	cout<< ans <<endl;

}



