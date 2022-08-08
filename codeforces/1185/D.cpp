#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("out.txt","w",stdout)

long long binpow(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % MOD;
		a = a * a;
		b >>= 1;
	}
	return res;
}



int main() {
	Fastio



	int n;
	cin >> n;

	ll a[n];
	map<ll, int> mp;
	FL(n)
	{
		cin >> a[i];
		mp[a[i]] = i + 1;
	}
	sort(a, a + n);

	if (n <= 3)
	{
		cout << 1 << endl;
		return 0;
	}
	int hobe = 1;

	for (int i = 3; i < n; i++)
	{
		if (a[i] - a[i - 1] != a[i - 1] - a[i - 2])
		{
			hobe = 0;
		}
	}

	if (hobe) {
		cout << mp[a[0]] << endl;
		return 0 ;
	}
	hobe = 1;

	for (int i = 2; i < n - 1; i++)
	{
		if (a[i] - a[i - 1] != a[i - 1] - a[i - 2])
		{
			hobe = 0;
		}

	}
	if (hobe)
	{
		cout << mp[a[n - 1]] << endl;
		return 0 ;
	}

	hobe = 0;
	ll c = a[n - 1] - a[0];
	int jhamela = -1;

	if (c % (n - 2) != 0)
	{
		cout << -1 << endl;
	}
	else {
		c /= (n - 2);
		ll shuru = a[0];
		for (int i = 1; i < n; i++)
		{
			if (a[i] == shuru + c)
			{
				shuru += c;
			}
			else {
				if (jhamela == -1)
				{
					jhamela = i;
					hobe = 1;
				}
				else {
					hobe = 0;
					break;
				}
			}
		}
		if (hobe) {
			cout << mp[a[jhamela]] << endl;
		}
		else cout << -1 << endl;
	}


	return 0;
}