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
        ll a[n];
        ll sum = 0;
        vector<ll> ev,od;
        FL(n) 
        {
            cin >> a[i];
            if(a[i]%2)od.push_back(a[i]);
            else ev.push_back(a[i]);
        }
        ll sum1= accumulate(ev.begin(),ev.end(),0);
        ll sum2 = accumulate(od.begin(),od.end(),0);
        if(sum1>sum2)
        {
            Y;
        }
        else N;
        
        
    }
    
   
    return 0;
}