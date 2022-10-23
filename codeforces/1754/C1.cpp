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
int com(char x)
{
    if(x=='L')return 2;
    else if(x=='M') return 1;
    return 0;
}


int main(){
    Fastio
    
    TC(t)
    {
        
        ll n;
        cin  >> n;

        ll a[n];
        FL(n)cin >> a[i];

        vector<pair<ll,ll>> pos;

        int sum = 0,sz = 0;
        FL(n)
        {
            sum+=i;
        }
        if(n%2) {
            cout << -1 << endl;
        }
        else{
            for (int i = 0;i<n-1;i+=2)
            {
                if(a[i]==a[i+1])
                {
                    pos.push_back({i,i+1});
                    sz++;
                }
                else {
                    pos.push_back({i,i});
                    pos.push_back({i+1,i+1});
                    sz+=2;
                }
            }
            cout << sz << endl;
            for (auto x : pos)
            {
                cout<< x.first+1 << " " << x.second+1 << endl;
            }
        }
    }
    
    return 0;
}