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
ll a[1000];

int main(){
    Fastio
    
    
    TC(t)
    {
        int n;

        cin >> n;
        ll ans[n];
        vector<ll> v(n,-1);

        for (int i = n-1;i>=0;)
        {
            ll sq = sqrt(i);
            if(sq*sq==i)
            {
                for (int j = 0;j<=i;j++)
                {
                    v[j] = sq*sq -j;
                }
                i = -1;
            }
            else{
                sq++;

                for (int j = sq*sq-i;j<=i;j++)
                {
                    v[j] = sq*sq-j;
                }
                i = sq*sq - i -1;
            }
        }
        FL(n)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        

        
    }
    
    return 0;
}