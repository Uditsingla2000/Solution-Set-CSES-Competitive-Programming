#include<iostream>
#include<algorithm>
#include<string>
#include<vector> 

using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	std::vector<int> score;
	getline(cin,s);
	int l=1;
	for (int i = 0; i < s.length(); ++i)
	{
		/* code */
		if(s[i]==s[i+1]){
			l++;

		}
		if(s[i]!=s[i+1]){
			score.push_back(l);
			l=1;
		}
	}
	cout<< *max_element(score.begin(),score.end());


return 0;
}