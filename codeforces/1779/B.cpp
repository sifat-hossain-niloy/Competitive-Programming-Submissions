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
        if(n%2==1)
        {
            if(n==3)
            {
                N;
            }
            else {
                Y;
                FL(n)
                {
                    
                    if(i%2==0)
                    {
                        cout << -1*(n-3)/2  << " ";
                    }
                    else cout << (n-1)/2 << " ";
                }
                cout << endl;
            }
        }
        else{
            Y;
            FL(n)
            {
                if(i%2)
                {
                    cout << -1 <<" ";
                }
                else cout << 1 << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}