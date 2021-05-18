// https://codeforces.com/contest/1506/problem/B

#include<bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long int

ll partialReplacement(string str, ll n, ll k)
{
	ll ans = 1;
	ll start = str.find('*');
	ll end = str.find_last_of('*');

	for(ll i=start;i<end;i+=k)
	{
		while(str[i]=='.')
			i--;
		
		ans++;
	}
	return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;

		string str;
		cin>>str;

		cout<<partialReplacement(str,n,k)<<endl;


	}
	return 0;
}


