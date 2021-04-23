#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;sc("%d",&t);while(t--)
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
unsigned ll int getSum(unsigned ll int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int main(){
    
    int t;
    cin >> t;

    while (t--)
    {
        unsigned ll n;
        cin >> n;

        unsigned ll int ans = 0;

        if (n%2050!=0)
        {
            cout << -1 << endl;
        }
        else{

            unsigned ll int cnt = n/2050;
            ans = getSum(cnt);
            
            cout << ans<< endl;
        }
    }

    return 0;
}
