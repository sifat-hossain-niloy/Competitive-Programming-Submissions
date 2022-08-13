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

	int n, m;
	cin >> n >> m;

	ll a[n];
	FL(n)
	{
		cin >> a[i]; a[i]--;
	}

	ll b[m];
	FL(m) cin >> b[i];

	int l = 0, r = n;

	while (l < r)
	{
		int mid = (l + r) / 2;

		vector<int> v(m + 1, -1);

		for (int i = 0; i <= mid; i++)
		{
			if (a[i] >= 0)
			{
				v[a[i]] = i;
			}
		}
		int hobe = 1;

		for (int i = 0; i < m; i++)
		{
			if (v[i] == -1) hobe = 0;
		}

		int tmp = 0;
		for (int i = 0; i <= mid; i++)
		{
			if (a[i] == -1 || v[a[i]] != i)
			{
				tmp++;
			}
			else {

				if (tmp < b[a[i]])
				{
					hobe = 0;
					break;
				}
				else tmp -= b[a[i]];
			}
		}
		if (hobe)r = mid;
		else l = mid + 1;
	}
	if (l == n)
	{
		cout << -1 << endl;
	}
	else cout << l + 1 << endl;

	return 0;
}