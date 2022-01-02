#include <bits/stdc++.h>

#define deb(x) cout<<#x<<"="<<x<<'\n'
#define MOD 1000000007
#define ll long long int
#define fr(a,b) for(int i=a;i<b;i++)
#define fr1(a,b) for(int j=a;j<b;j++)


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
using namespace std;
int main() {
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    ll n,k;
    cin >> n >> k;
    ll a[n];
    set<long long int> s;

    for (int i = 0;i<n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if(k==1){
        cout << n << endl;
        return  0;
    }
    sort(a,a+n);
for(int i = 0;i<n;i++)
    {

        if(s.find(a[i])!=s.end() && s.find(k*a[i])!=s.end())
        {
        //deb(a[i]);
        //deb (k*a[i]);
            s.erase(k*a[i]);

        }
    }
    cout << s.size() << endl;


return 0;
}


