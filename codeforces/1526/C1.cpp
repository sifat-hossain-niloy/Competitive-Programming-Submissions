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
    
    
    int n;
    cin >> n;
    ll a[n];
    FL(n) cin >> a[i];

    ll ans  = 0,sum = 0;
    priority_queue<ll> q;

    for (int i = 0;i<n;i++)
    {
        if(a[i]>=0)
        {
            ans++;
            sum+=a[i];
            
        }
        else{
            if(sum<-a[i])
            {
                if(!q.empty())
                {
                    if(q.top()+a[i] >=0 )
                    {
                        sum+=q.top();
                        q.pop();
                        sum+=a[i];
                        q.push(-a[i]);
                        
                    }
                }
                else{
                    continue;
                }
            }
            else{
                q.push(-a[i]);
                sum+=a[i];
                ans++;
                //cout << i << endl;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}