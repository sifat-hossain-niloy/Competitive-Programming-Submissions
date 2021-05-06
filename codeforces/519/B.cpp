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
    
    int n;
    cin >> n;
    multiset<int> s1,s2;

    for (int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
        s2.insert(x);
    }
    for (int i = 0;i<n-1;i++)
    {
        int x;
        cin >> x;
        s1.erase(s1.find(x));
    }
    auto it = s1.begin();
    cout << *it << endl;
    s2.erase(s2.find(*it));

    for (int i = 0;i<n-2;i++)
    {
        int x;
        cin >> x;
        s2.erase(s2.find(x));
    }
    it = s2.begin();
    cout << *it << endl;

    return 0;
}
