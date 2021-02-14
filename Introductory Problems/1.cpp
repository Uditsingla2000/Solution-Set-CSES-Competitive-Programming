#include<iostream>

using namespace std;
int main(){
	long n;
	cin>> n;
	if(n==1){
		    cout<< n; 
		}
	while(n!=1){
	    cout << n<< " ";
		if(n%2==0){
		n=n/2;
		if(n==1){
		    cout<< n; 
		}

		}
		else{
		n=n*3 +1;
		}

	}
}