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
       int n;
       cin >> n;
       string s;
       cin >> s;
       int a[30]= {0};
       bool hobe = true;

       if (n==1)
       {
           cout << "YES\n";
       }
       else{
           for (int i = 1;i<s.size();i++)
           {
               int x = s[i] - 'A';
               int y = s[i-1] - 'A';

                if (s[i]!= s[i-1])
               {
                   a[y]++;
               }
               if (a[x]!=0)
               {
                   cout << "NO\n";
                   hobe  = false;
                   break;
               }
               
           }
           if (hobe)
           {
               cout << "YES\n";
           }
       }

    }

    return 0;
}
