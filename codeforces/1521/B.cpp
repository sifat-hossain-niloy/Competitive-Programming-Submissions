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
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        int cnt = 0;
        vector < vector<int>> v(n);
        

        for (int i = 0;i<n;i++)
        {
            cin >> a[i];
        }

        for (int i = 1;i<n;i+=2)
        {
            
            int x =  min(a[i],a[i-1]);
            a[i] = 1000000007;
            v[cnt].push_back(i);
            v[cnt].push_back(i+1);
            v[cnt].push_back(x);
            v[cnt].push_back(1000000007);
            cnt++;
        }
        /*FL(n)
        {
            cout << a[i] << " " ;
        }
        cout <<endl <<endl;*/
        
        cout << cnt << endl;
        
        for (int i = 0;i<cnt;i++)
        {
            for (int j = 0;j<4;j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }       

    }

    return 0;
}
