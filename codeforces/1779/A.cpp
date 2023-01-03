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
        cin >> n;
        string s;
        cin >> s;


        vector<ll> r,l;

        FL(n)
        {
            if(s[i]=='L')l.push_back(i);
            else r.push_back(i);
        }
        
        if(r.size()==0||l.size()==0)
        {
            cout << -1 << endl;
        }
        else if(r.front()<l.back())
        {
            cout << 0 << endl;
        }
        else if(r.front()==l.back()+1)
        {
            cout << r.front() << endl;
        }
        else cout << -1 << endl;
        
    }
    return 0;
}