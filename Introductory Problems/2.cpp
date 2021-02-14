#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>> n;
	int a[n];
	if(n==1) return 0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
// 		cout << i<<endl;
            cin>> a[i];
            
	}
	sort(a,a+n-1);
	if(a[n-2]!=n){
	    	cout<< n;
	    	return 0;
	    }
	 if(n==2){
	 	if(a[0]==1)cout << n;
	 	if(a[0]==2)cout << 1;
	 }   
	for(int i=0;i<n-1; i++){
	    if(a[i+1] - a[i] ==2){
	        cout<< a[i]+1 ;
	    }

	}
return 0;
}