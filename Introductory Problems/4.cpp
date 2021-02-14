#include<bits/stdc++.h>

using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>> a[i];
	}

		// for (int i = 0; i < n; ++i)
		// {
		// 	/* code */
		// 	cout<<a[i]<<" ";
		// }
	long long sum=0;
	int dif;
		for (int i = 0; i < n-1; ++i)
		{	

			/* code */
			if(a[i+1]<a[i]){
				dif =a[i]-a[i+1];
				a[i+1]=a[i];
				sum=sum+dif;
			}

	}
	cout<< sum;

	return 0;
}