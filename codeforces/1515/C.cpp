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
       int n,m,x;
       cin >> n >> m >> x;
       int r[n];
       cout << "YES\n";

       vector<pair<int,int>> v;

       FL(n)
       {
           int k;
           cin >> k;

           v.push_back(make_pair(k,i));
       }

       sort(v.begin(),v.end());
       int cnt = m;
       bool yes = true;

       for (int i = v.size()-1;i>=0;i--)
       {
           if(yes)
           {
               r[v[i].second] = cnt;
               cnt--;
               if (cnt==0)
               {
                   yes =  false;
               }
           }
           else{
               cnt++;
               
               if (cnt==m)
               {
                   r[v[i].second] = cnt;
                   cnt = m;
                   yes = true;
               }
               else{
                   r[v[i].second] = cnt;
               }
           }
       }
        for (int i = 0;i<n;i++)
        {
            cout << r[i] << " ";
        }
        cout << endl;


    }

    return 0;
}
