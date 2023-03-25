#include<iostream>
using namespace std;

int Search( int *arr, char letters, int target){
	int start =0; 
	int end = letters.length - 1;

	while(start <= end){
		int mid = start + (end - start) / 2;


		if (target < letters[mid]) {

			end = mid - 1;
		} else  {
			start = mid + 1;
		}
	}

	return letters[start % letters.length];

}



int main(void){

	char letters[] = ["c","f","j"];
	int target = "a";
	int ans = Search( letters, target);
	 int n = sizeof(letters) / sizeof(letters[0]);
	cout<< ans <<endl;

}



