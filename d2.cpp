#include<iostream>
using namespace std;

 int  search (int matrix, int target){
	int r = 0;
	int c = matrix.length - 1;


	while(r < matrix.length && c >= 0){
	   if(matrix == target){
	       return (r, c);

	   }
	   if(matrix < target){
	   r++;
	   }else{
	     c--;
	   }

	}
	return(-1, -1);

}



int main(){

int arr[] = {
          10, 20, 30, 40,
          15, 25, 35, 45,
          28, 29, 37, 49,
          33, 34, 38, 50	
};	
  int target = 37;
  int ans = search (*arr, target);
	return 0;
}