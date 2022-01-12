#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll a,b,xn,x,m;
ll tt = 1e9;

ll power(ll x, ll y, ll p)
{
	ll res = 1;
	x %= p;
	if (x == 0) return 0; 
	while (y > 0)
	{
		if (y & 1)
		res = (res*x) % p;
		y = y>>1; 
		x = (x*x) % p;
	}
	return res;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while(t--)
	{
		ll n,k;
		cin >> n >> k;

		if((n+1)/2 <k)
		{
			cout << -1 << endl;
			continue;
		}
		else{
			ll cnt = 0;
			for (int i = 0;i<n;i++)
			{
				for (int j = 0;j<n;j++)
				{
					if(cnt<k && i==j && i%2==0)
					{
						cout << 'R';
						cnt++;
					}
					else{
						cout << '.';
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}