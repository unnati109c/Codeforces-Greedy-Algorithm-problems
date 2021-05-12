// https://codeforces.com/problemset/problem/1342/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll RoadToZero(ll x, ll y, ll a, ll b)
{
	ll ans=0;
	if(x>y)
		swap(x,y);

	ans+= a*(y-x);

	if(2*a < b)
	{
		ans += x*(2*a);
	}
	else
	{
		ans += x*b;
	}
	return ans;

}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;

		ll a,b;
		cin>>a>>b;

		cout<<RoadToZero(x,y,a,b)<<endl;
	}

	return 0; 
}
