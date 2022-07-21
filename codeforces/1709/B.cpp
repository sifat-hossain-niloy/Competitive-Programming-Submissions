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
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

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


int main(){
    Fastio
    
    
    ll n,m;
    cin >> n >> m;

    ll a[n],b[n],c[n];
    FL(n) cin >> a[i];
    b[0] = 0;

    for (int i = 1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            b[i] = b[i-1]+a[i-1]-a[i];
        }
        else{
            b[i] = b[i-1];
        }
    }
    c[n-1] = 0;
    for (int i = n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            c[i] = c[i+1]+a[i+1]-a[i];
        }
        else{
            c[i] = c[i+1];
        }
    }
    // FL(n)
    // {
    //     cout << b[i] <<" ";
    // }
    // cout << endl;
    // FL(n)
    // {
    //     cout << c[i] <<" ";
    // }
    cout << endl;
    for (int i = 0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x<y)
        {
            cout << b[y-1]-b[x-1] << endl;
        }
        else{
            cout << c[y-1]-c[x-1] << endl;
        }
    }
    return 0;
}