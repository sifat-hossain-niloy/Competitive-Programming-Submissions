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
ll dp[102][2];


int main(){
    Fastio
    
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        int n,k,d;
        cin >> n >> k >> d;
        dp[0][0] = 1;
        dp[0][1] = 0;

        for (int i = 1;i<=n;i++)
        {
            dp[i][0] = dp[i][1] = 0;
        }
        for (int i = 1;i<=n;i++)
        {
            for (int j = 1;j<=k;j++)
            {
                if(i>=j)
                {
                    if(j>=d)
                    {
                        dp[i][1]+=(dp[i-j][0]);
                    }
                    else if(j<d){
                        dp[i][0]+=dp[i-j][0];
                    }
                    dp[i][1]+=dp[i-j][1];
                    dp[i][1]%=MOD;
                    dp[i][0]%=MOD;
                }
            }
        }
        // for (int i = 0;i<=k;i++)
        // {
        //     for (int j = 0;j<=n;j++)
        //     {
                
        //         cout << dp[i][j] << ' ';

        //     }
        //     cout << endl;
        // }
        cout << dp[n][1] << endl;

        
    }
    
    return 0;
}