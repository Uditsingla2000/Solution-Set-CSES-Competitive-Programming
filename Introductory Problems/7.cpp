#include<bits/stdc++.h>

using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	 int n;
	cin >> n;

	long long ans;
	long long a;
	cout<< 0 << endl; 
	for (int i = 2; i <= n; ++i)
	{
		/* code */
		a =pow(i,2);
		ans = ( a*(a-1)/2 ) - ( 4*(i-1)*(i-2) ) ; 

		cout << ans << endl;
	}

return 0;

}
