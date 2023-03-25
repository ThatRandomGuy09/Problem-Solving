#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

	int mid = s + (e  -  s)/2 ;

	int l1 = mid- s+1;
	int l2 = e- mid;

	int *first = new int [l1];
	int *second = new int [l2];


	int k=s;
	for (int i = 0; i <l1; ++i)
	{
		first[i] = arr[k++];
	}

	 k=mid+1;
	for (int i = 0; i <l2; ++i)
	{
		second[i] = arr[k++];
	}

	int ind1 =0;
	int ind2 =0;
	 k=s;  // k equals to mainArrayIndex

	 while(ind1<l1 && ind2<l2){
	 	if(first[ind1]<second[ind2]){
	 		arr[k++]=first[ind1++];
	 	}else{
	 		arr[k++]=second[ind2++];

	 	}
	 }

	 while(ind1<l1){
	 	arr[k++]=first[ind1++];

	 }
	  while(ind2<l2){
	 	arr[k++]=second[ind2++];

	 }
	 delete []first;
	 delete []second;
}
void mergeSort(int *arr, int s, int e){

	if(s>=e){
		return;
	}

     int mid= s + (e  -  s)/2 ;
	mergeSort(arr,s,mid);


	mergeSort( arr,mid+1,e);

	merge(arr,s,e);
}

int main(){

	int arr[5] = {2,5,1,6,9};
	int n=5;

	mergeSort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<< " ";
	}cout<<endl;


	return 0;
}