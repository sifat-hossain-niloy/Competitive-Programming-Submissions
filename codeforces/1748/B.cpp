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
        ll n;
        cin >> n ;
        
        string s;
        cin >> s;

        ll sum = 0;
        for (int i = 0;i<n;i++)
        {
            vector<ll> mp(10);

            ll temp = 0;

            for (int j =i;j<i+100 && j<n;j++)
            {
                if(mp[s[j]-'0']==0)
                {
                    temp++;
                }
                mp[s[j]-'0']++;
                ll ma = -1;
                for (int k = 0;k<10;k++)
                {
                    ma = max(ma,mp[k]);
                }
                if(ma <=temp)
                {
                    sum++;
                }
            }
        }
        cout <<sum <<endl;

    }
    return 0;
}