#include<bits/stdc++.h>
#include<stdio.h>

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
        int n;
        cin  >> n;
        ll a[n],b[n];

        FL(n) cin >> a[i];
        FL(n)
        {
            b[i] = i+1;
        }
        for (int i = 0;i<n;i++)
        {
            if(i==n-1 && a[i]==b[i] && i!=0)
            {
                swap(b[i],b[i-1]);
            }
            else if(i!=n-1) {
                if(a[i]==b[i])
                {
                    swap(b[i],b[i+1]);
                }
            }
        }
        bool hobe = true;
        FL(n)
        {
            if(a[i]==b[i]) hobe = false;
        }
        if(!hobe) cout << -1 << endl;
        else{
            FL(n) cout << b[i] << " ";

            cout << endl; 
        }
    }
    
    return 0;
}