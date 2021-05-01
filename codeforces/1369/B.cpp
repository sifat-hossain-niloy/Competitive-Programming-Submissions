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
    
    TC(t)
    {
       int n,z = -1 ,o = -1;
       string s;
       cin >> n >> s;

       for (int i = 0;i<n;i++)
       {
           if (s[i]=='0')
           {
               z = i;
           }
           else if (o == -1)
           {
               o = i;
           }
       }

       if (z<o || z == -1 || o == -1)
       {
           cout << s << endl;
       }
       else 
       {
           for (int i = 0;i<o;i++)
           {
               cout << s[i];
           }
           for (int i = z ;i<n;i++)
           {
               cout << s[i];
           }
           cout << endl;
       }

    }

    return 0;
}
