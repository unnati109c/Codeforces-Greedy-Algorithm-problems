//  https://codeforces.com/contest/1516/problem/A

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;

		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		ll j=0;
		for(ll i=0;i<k;i++)
		{
			while(a[j]==0 and j<(n-1))
				j++;

			a[j]--;
			a[n-1]++;
		}

		for(ll i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}cout<<endl;

	}
	return 0;
}