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
        int n,H,M;
        cin >> n >> H >> M;
        vector<int> v(n);
        ll ansh = -1,ansm = -1;
        ll T = H*60+M;
        FL(n) 
        {
            int x,y;
            cin >> x >> y;
            v[i] = x*60 +y;
        }
        sort(v.begin(),v.end());
        FL(n)
        {

            if(v[i]>=T )
            {
                if(ansh==-1)ansh = v[i]-T;
                else ansh = min(v[i]-T,ansh);
            }
        }
        if(ansh==-1)
        {
            ansh = abs(v[0]+(24*60-T));
        }


        
        
        cout << ansh/60 << " " << ansh%60 << endl;
    }
    
    return 0;
}