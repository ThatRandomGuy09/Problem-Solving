#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int linearSearch (int *arr, int target) {

	

	for(int index =0; index < sizeof(arr); index++) {
	 int element = arr[index];
	if (element == target){
      return index;
     	}
	}
}
int main(){

	
	int nums[10] = {23,45,1,2,8,19,-3,16,-11,28};

	int target = 19;
	int ans = linearSearch( nums, target);


	
}