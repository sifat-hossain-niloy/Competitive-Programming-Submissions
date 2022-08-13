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


	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = 0;
	if (a == b && b == c)
	{
		ans = 0;
	}
	else if (a >= b && a >= c)
	{
		a--;
		if (b > a ) b--;
		if (c > a) c--;
		ans = a * 3 - a - b - c;

	}
	else if (b >= a && b >= c)
	{
		b--;
		if (c > b)c--;
		if (a > b) a--;
		ans = b * 3 - a - b - c;
	}
	else {
		c--;
		if (a > c)a--;
		if (b > c)b--;
		ans = c * 3 - a - b - c;
	}
	cout << ans << endl;

	return 0;
}