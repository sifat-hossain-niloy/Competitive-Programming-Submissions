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
ll gcdExtended(ll a, ll b, ll* x, ll* y)
{

    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
    return b;
    }

    // To store results of recursive call
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

ll modInverse(ll A, ll M)
{
    ll x, y;

    ll g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        
        {
            cout << "Inverse doesn't exist";
        }

    else {

        ll res = (x % M + M) % M;
        return res;
    }
    return 0;
}
// Function for extended Euclidean Algorithm

// long long mpow(long long b, long long ex){
//     if (b==1)return 1;
//     long long r = 1;
//     while (ex ){
//         if (ex&1)r=(r * b)%mod;
//         ex = ex >> 1;
//         b = (b * b)%mod;}
//     return r;
// }


int main(){
    Fastio
    
    TC(t)
    {
        ll n;
        cin >> n;
        n--;
        ll ans = n*(n+1);
        ans%=MOD;
        ans*=(2*n +1);
        ans%=MOD;

        ans*=modInverse(3,MOD);
        ans%=MOD;

        ans+=(n*(n+1))/2;
        ans%=MOD;

        // ans*=2022;

        n++;
        ans+=(n*n);

        ans%=MOD;
        ans*=2022;
        ans%=MOD;
        cout << ans << endl;
        
    }
    return 0;
}