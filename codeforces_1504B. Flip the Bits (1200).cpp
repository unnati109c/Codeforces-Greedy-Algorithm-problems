//  https://codeforces.com/contest/1504/problem/B

#include<bits/stdc++.h>
using namespace std;
#define vll vector<ll>
#define ll long long int

bool FlippingBits(string a, string b, ll n)
{
	vector<pair<ll,ll>>v;
	ll zero = 0, one = 0;
	ll j = 0;
	for(ll i=0;i<n;i++)
	{
		if(a[i] == '0')
			zero++;
		else
			one++;
		if(zero == one)
		{
			v.push_back({j,i});
			j=i+1;
		}
	}

	for(auto i : v)
	{
		ll start = i.first;
		ll end = i.second;

		if(a[start]==b[start])
			continue;
		else
		{
			for(ll r=start;r<=end;r++)
			{
				if(a[r]=='0') 
				       a[r]='1';
				else
					a[r]='0';
			}
		}
	}

       for(int i=0;i<n;i++)
       {
              if(a[i]!=b[i])
              return false;
       }
       return true;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		string str1, str2;
		cin>>str1>>str2;

		if(FlippingBits(str1, str2, n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}

