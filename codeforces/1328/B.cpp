#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"

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
    
    int a[100000] = {0};
    a[0]=1;
    for (int i = 1;i<100000;i++)
    {
        a[i] = i+a[i-1];
    }
    TC(t)
    {
        int n,k,x,y;
        cin >>  n >> k;

        for(int i = 0;i<n;i++)
        {
            if (a[i]==k)
            {
                x = n-i-2;
                y = n-1;
                //cout << x << " " << y << "ohyes" ;
                break;
            }
            else if (a[i]>k)
            {
                int temp = i-1;
                x = n-temp-2;
                y = n-1-(k-a[temp]);
                //cout << x << " " << y << "ohno" ;
                break;
            }
        }
        for (int i = 0;i<n;i++)
        {
            if (i== x || i==y)
            {
                cout <<'b';
            }
            else cout << 'a';
        }
        cout << endl;
    }

    return 0;
}
