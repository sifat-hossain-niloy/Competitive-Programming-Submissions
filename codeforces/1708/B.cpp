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
        ll n,l,r;
        cin >> n >> l >> r;

        vector<ll> v(n);
        

        map<ll,int> mp;
        int hobe = 1;

        for(int i = n;i>0;i--)
        {
            int d = l%i;
            for(int j = 0; ; j++)
            {
                if((l+j*i-d)>r)
                {
                    hobe = 0;
                    break;
                }
                if(mp[l+ j*i - d] == 0 && (l+j*i-d)>=l)
                {
                    v[i-1] = l+j*i-d;
                    //mp[l+ j*i - d]++;
                    break;
                }
                

            }
            if(hobe == 0) break;
        }
        if(!hobe)N;
        else {
            Y;
            for (int i = 0;i<n;i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
    }
    
    return 0;
}