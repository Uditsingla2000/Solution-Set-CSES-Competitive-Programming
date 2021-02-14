

#include <bits/stdc++.h>

using namespace std;
typedef  long long ll; 
void solve(void){
	ll x , y;
	cin >> x>> y;
	ll ans;

	if (x<y)
	{
		/* code */
		if(y%2==0){
			ans =(y-1)*(y-1) +x;
			
		}
		else{
			ans= y*y -x +1;
		}
		cout<< ans<<"\n";
	}
	else{
		if (x%2==0)
		{
			/* code */
			ans = x*x -y +1 ;
		}
		else{
			ans =(x-1)*(x-1) +y;

	}cout<< ans<<"\n";
		}

	// if (x<y)
 //            {
 //                ll ans;
 //                if (y%2!=0)
 //                {
 //                   ans = (y*y) - x + 1;
 //                }
 //                else
 //                {
 //                    ans=((y-1)*(y-1))+x;   
 //                }
 //                cout<<ans<<endl;
 //            }

 //    else{
 //        ll ans;
 //        if (x%2!=0)
 //        {
 //            ans = ((x-1)*(x-1)) + y;
 //        }
 //        else
 //            ans = (x*x)-y+1;
 //        cout<<ans<<endl;
 //     }



}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t=1;
	cin>> t;
	while(t--){
		solve();
	}



}