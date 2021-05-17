//  https://codeforces.com/problemset/problem/1399/C

#include<bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long int

ll BoatCompetition(vll arr, ll n)
{
	map<ll,ll>m;
	for(auto i : arr)
	{
		m[i]++;
	}

	ll ans = INT_MIN;

	for(ll sum=2;sum<=(2*n);sum++)
	{
		ll c=0;
		
		for(ll cur_in_map = 1; cur_in_map < sum; cur_in_map++)
		{
			c += min(m[cur_in_map] , m[sum - cur_in_map]);
		}

		ans = max(ans,c/2);
	}

	return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		vll a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		cout<<BoatCompetition(a,n)<<endl;


	}
	return 0;
}


