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


	ll a, b, c, x, y, z;
	cin >> a >>  b >> c >> x >> y >> z;

	if (a >= x)
	{
		a -= x;
		x = 0;
	}
	else {
		x -= a;
		a = 0;
	}
	if (b >= y)
	{
		b -= y;
		y = 0;
	}
	else {
		y -= b;
		b = 0;
	}
	if (c >= z)
	{
		c -= z;
		z = 0;
	}
	else {
		z -= c;
		c = 0;
	}
	ll dorkar = x + y + z;

	ll ase = a / 2 + b / 2 + c / 2;
	if (dorkar <= ase)
	{
		cout << "Yes\n";
	}
	else cout << "No\n";



	return 0;
}