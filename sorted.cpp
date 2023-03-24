#include<iostream>
using namespace std;


bool sorted(int arr[], int n){

if(n ==  1 || n==0){
  return true;
}else{

return arr[n-1]<arr[n-2] && sorted(arr, n-1);
 }
	
}


int main(){

int arr[] = {1,2,3,5,6};
int n = sizeof(arr) / sizeof(arr[0]);
    if (sorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";

	return 0;
}