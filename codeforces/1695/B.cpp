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
    //Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v;

        ll a[n];

        FL(n) 
        {
            cin >> a[i];
        }

        if(n&1)
        {
            cout << "Mike\n";
        }
        else 
        {
            ll m1 = INT32_MAX,m2;
            m2 = m1;

            int i1 ,i2;
            for (int i = 0;i<n;i++)
            {
                if(i&1)
                {
                    if(a[i]<m2)
                    {
                        //i2 = i;
                        m2 = a[i];
                    }
                }
                else{
                    if(a[i]<m1)
                    {
                        //i1 = i;
                        m1 = a[i];
                    }
                }
            }
            for (int i = 0;i<n;i+=2)
            {
                if(a[i]==m1)
                {
                    i1 = i;
                    break;
                }
            }
            for (int i = 1;i<n;i+=2)
            {
                if(a[i]==m2)
                {
                    i2 = i;
                    break;
                }
            }
            if(m1<m2){
                cout << "Joe\n";
            }
            else if(m1>m2)
            {
                cout << "Mike\n";
            }
            else{
                if(i1<i2)
                {
                    cout << "Joe\n";

                }
                else cout << "Mike\n";
            }
        }


        
    }
    
    return 0;
}