//  https://codeforces.com/contest/1472/problem/B

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
		ll n;
		cin>>n;

		vll a(n);
		ll one=0, two=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			one++;
			else
			two++;
		}
		
		if(two%2==1 and one>=2)
		{
		       two+=1;
		       one-=2;
		}
		
		if(two%2==0 and one%2==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		
		  
	}
	return 0;
}

