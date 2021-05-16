//  https://codeforces.com/contest/1428/problem/C

#include<bits/stdc++.h>
using namespace std;
#define vll vector<ll>
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
        ll count=0;
		for(int i=0;i<s.length();i++)
		{
	       if(count>0 and s[i]=='B')
	       		count--;
	       else
	       		count++;
		}
              
        cout<<count<<endl;

	}
	return 0;
}

