#include<bits/stdc++.h>
using namespace std;
int main()
{

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	
	int n;
	cin>> n;

	if (n<4 &&n>1)
	{
		/* code */
		cout<< "NO SOLUTION";
		return 0;
	}
	if (n==1)
	{
		/* code */
		cout<< 1;
		return 0;
	}
int j=n;
n=n-1;
	for (int i = 0; i < j/2; ++i)
	{   cout<< n<<" ";
		/* code */
		if(n>0){
			n=n-2;
			
		}	
	}
	n=j;
	for (int i = 0; i < j-j/2; ++i)
	{   cout<< n<<" ";
		/* code */
		if(n>0){
			n=n-2;
			
		}
	}


	return 0;
}
