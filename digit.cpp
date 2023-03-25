
#include <iostream>
using namespace std;

int digit( int n ){

	if(n==0){
		return 0;
	}else{
		return  digit(n/10)+ n%10; 
	}
	
}


int main(){

	int ans = digit(1342);
	cout<<ans<<endl;

	return 0;
}
