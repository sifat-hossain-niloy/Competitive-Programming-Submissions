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
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        string s,st = "RGB";
        cin >> s;

        ll ans = INT64_MAX;

        for (int i = 0;i<n-k+1;i++)
        {
            for (int j = 0;j<3;j++)
            {
                ll temp = 0;
                for (int l = 0;l<k;l++)
                {
                    if(s[i+l]!= st[(j+l)%3])temp++;
                }
                ans = min(ans,temp);
            }
        }
        cout << ans << endl;
        
    }
    
    return 0;
}