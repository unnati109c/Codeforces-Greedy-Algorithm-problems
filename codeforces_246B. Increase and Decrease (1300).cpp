//  https://codeforces.com/problemset/problem/246/B

#include<bits/stdc++.h>
using namespace std;
#define vll vector<ll>
#define ll long long int

ll IncreaseAndDecrease(vll arr, ll mid, ll n)
{
	ll count=0;
	for(ll i=0;i<n-1;i++)
	{
	       if(arr[i] == mid)
	              count++;
	              
		if(arr[i] > mid)
		{
			arr[i+1] += (arr[i]-mid);
			arr[i] = mid;
			count++;
		}
		else if (arr[i] < mid)
		{
			arr[i+1] -= (mid - arr[i]);
			arr[i] = mid;
			count++;
		}
	}
	if(arr[n-1]==mid)
		count++;

	return count;
}

int main()
{
	
	ll n;
	cin>>n;

	vll a(n);
	ll total=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		total += a[i];
	}
	ll mid = total/n;

	cout<<IncreaseAndDecrease(a, mid, n);

	return 0;
}

