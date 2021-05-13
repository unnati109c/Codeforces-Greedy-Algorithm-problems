//  https://codeforces.com/problemset/problem/1409/B

#include<bits/stdc++.h>
using namespace std;
#define vll vector<ll>
#define ll long long int

ll ok(ll a, ll b, ll x, ll y, ll n){
    ll d1=a-x;
    ll d2=b-y;
    ll c1=min(d1,n);
    a-=c1;
    n-=c1;
    ll c2=min(d2,n);
    b-=c2;
    n-=c2;
    ll ans=a*b;
    return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;

		ll ans =min(ok(a,b,x,y,n),ok(b,a,y,x,n));
        cout<<ans<<"\n";
	}
	return 0;
}

