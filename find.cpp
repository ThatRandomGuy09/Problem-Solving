#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str = "Vansh is a men";

	char c = 'a';

	size_t found = str.find(c);
	if(found != string::npos)
	cout<<"First is "<< found<<endl;



	 found = str.find(c, found+1);
	if(found != string::npos)
	cout<<"next is "<< found<<endl;


	return 0;

	}