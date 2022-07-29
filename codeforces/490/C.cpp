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

ll ans ;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % ans;
        a = a * a % ans;
        b >>= 1;
    }
    return res;
}


int main(){
    Fastio
    
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        string s;
        ll a,b;
        cin>>s>>a>>b;
        int sz= s.size();
        vector<int> c(sz,0),d(sz,0);
        c[0] = (s[0]-'0')%a;
        d[sz-1] = (s[sz-1]-'0')%b;
        ans = b;

        for (int i = 1;i<sz;i++)
        {
            c[i] = (c[i-1]*10+s[i]-'0')%a;
            
        }
        ll pow = 1;
        for (int i = sz-2;i>=0;i--)
        {
            d[i] = (d[i+1]+ (s[i]-'0')*binpow(10,pow))%b;
            pow++;
        }
        // FL(sz) cout << c[i] << " ";
        // cout << endl;
        // FL(sz) cout << d[i] << " ";
        // cout << endl;
        ll hobe = -1;

        for(int i = 0;i<sz-1;i++)
        {
            if(c[i]==0 && d[i+1]==0 && s[i+1]!='0' && s[0]!='0')
            {
                hobe = i;
                break;
            }
        }
        if(hobe == -1) N;
        else {
            Y;
            cout << s.substr(0,hobe+1) << endl;
            cout << s.substr(hobe+1,sz-1-hobe) << endl;
        }
    }
    
    return 0;
}