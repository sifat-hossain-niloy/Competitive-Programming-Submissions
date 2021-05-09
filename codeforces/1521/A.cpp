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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i*i <=n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
  

int main(){
    
    TC(t)
    {
        ll a,b;
        cin >> a >> b;
        
        if (b == 1)
        {
            cout << "NO\n";
        }
        else if (b==2)
        {
            cout << "YES\n";
            cout << a*3 << " " << a << " " << a*4 << endl;
        }
        else{
            cout << "YES\n";
            cout <<  a << " " << a*(b-1) << " " << a*b << endl;
        }
       
 
    }

    return 0;
}
