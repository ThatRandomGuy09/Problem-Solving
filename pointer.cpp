#include<iostream>
using namespace std;


int main(){


	/*int i =5;
	// int *p =&i;
	int *p = 0;
	 p = &i;


	cout<<p<<endl;
	cout<<*p<<endl;

	return 0;

	int num = 5;
	int a = num;
	a++;

	cout<<num<<endl;


	int *p=&num;
	cout<<"before"<<num<<endl;
	(*p)++;
	cout<<"after"<<num<<endl;



	int *q=p;
	cout<<p<<q<<endl;
	cout<<*p<<*q<<endl;


	int i =3;
	int *t= &i;

	*t=(*t)+1;

	cout<<*t<<endl;
	

	cout<<t<<endl;
	t=t-100;
	cout<<t<<endl;*/


	int arr[10] ={2,5,6};

	int*p=&arr[0];
	/*cout<<arr<<endl;
	cout<<&arr[1]<<endl;
	cout<<*(arr+2)<<endl;
	cout<<sizeof(*arr)<<endl;
	/*cout<<sizeof(*p)<<endl;
	cout<<sizeof(&p)<<endl;*/

	//cout<<&arr[0]<<endl;
	//cout<<&p<<endl;
	cout<<p<<endl;
	p=p+1;
	cout<<p<<endl;
}