#include<bits/stdc++.h>

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
    
    
    string s;
    cin >> s;

    string t;
    ll a[s.size()],cnt = 0;
    a[0] = 1;
    t+=s[0];
    cnt++;
    if(s.size()>1)
    {

        t+=s[1];
        if(t[0]==t[1])a[cnt] = 2;
        else a[cnt] =1;
        cnt++;

    }

    
    ll sz = s.size();

    for (int i = 2;i<sz;i++)
    {
        if(s[i]==s[i-1] && s[i]==s[i-2])
        {
            continue;
        }
        else if(s[i]!=s[i-1])
        {
            a[cnt] = 1;
            t+=s[i];
            cnt++;
        }
        else if(s[i]==s[i-1] && a[cnt-2]!=2){
            a[cnt] = 2;
            t+=s[i];
            cnt++;
        }
        else{
            continue;
        } 
    }
    cout << t << endl;
    
    return 0;
}