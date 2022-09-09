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
int dig(ll x)
{
    int cnt = 0;
    while(x>0)
    {
        cnt++;
        x/=10;
    }
    return cnt;
}


int main(){
    Fastio
    
    TC(t)
    {
        int n;
        cin >> n;
        multiset<ll> a,b;
        ll ans = 0;
        FL(n)
        {
            ll x;
            cin >> x;
            //cout << dig(x) << " ";
            a.insert(x);
        }
        FL(n)
        {
            ll x;
            cin >> x;
        
            if(a.find(x)!=a.end())
            {
                a.erase(a.find(x));
            }
            else{
                b.insert(x);
            }
        }

        map<int,int> ma,mb;
        for (auto x:a)
        {
            if(x>9)
            {
                ll d = dig(x);
                ma[d]++;
                
                ans++;
            }
            else ma[x]++;
        }
        
        for (auto x:b)
        {
            if(ma[x]>0)
            {
                ma[x]--;
                // cout << "ad" << x << endl;
                continue;
            }
            if(x>9)
            {
                ll d = dig(x);
                // cout << d << "fa " << endl;
                if(ma[d]>0)
                {
                    ma[d]--; 
                    // cout << "gr" << d <<endl;   
                }
                else{
                    mb[d]++;
                }
                ans++;
                // cout << 2 << " ";
                
            }
            else mb[x]++;
        }
        
        for (int i = 2;i<10;i++)
        {
            ans+=(abs(ma[i]-mb[i]));
        }
        // ans-=mp[1];
        
        cout<<ans <<endl;

    }
    
    return 0;
}