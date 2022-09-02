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


int main(){
    Fastio
    
    TC(t)
    {
        int n;
        cin >> n;
        ll a[n+1],b[n+1];
        FL(n)
        {
            cin >> a[i];
        }
        a[n] = a[0];
        FL(n) cin >> b[i];
        b[n] = b[0];

        ll hobe = 1;
        for (int i = n-1;i>=0;i--)
        {
            if(a[i]==b[i]) continue;
            if(a[i]>b[i] || b[i]>b[i+1]+1)
            {
                hobe = 0;
            }
        }
        if(hobe) Y;
        else N;
    }
    
    return 0;
}