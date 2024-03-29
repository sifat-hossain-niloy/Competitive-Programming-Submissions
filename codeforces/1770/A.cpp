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
    //Fastio
    
    TC(t)
    {
        ll n,m;
        cin >> n >> m;

        ll a[n];
        ll b[m];

        priority_queue<ll> q;
        FL(n) 
        {
            cin >> a[i];
            // q.push(-1*a[i]);
        }
        FL(m)cin >> b[i];

        sort(a,a+n);

        ll sum = 0;

        for(int i = 0;i<m;i++)
        {
            ll hobe= 0;

            for (int j =0;j<n;j++)
            {
                if(b[i]>a[j])
                {
                    a[j] = b[i];
                    hobe= 1;
                    break;
                }
            }
            if(hobe==0)
            {
                a[0] = b[i];
                sort(a,a+n);
            }
            else{
                hobe =0;
                sort(a,a+n);
            }
        }
        FL(n)
        {
            sum+=a[i];
        }
        
        cout << sum << endl;
        
    }
    return 0;
}