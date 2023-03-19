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
#define read            freopen("out.txt","w",stdout)

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

    TC(t)
    {
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll hobe = 1;

        map<char,int>mp;

        for (int i = 0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]] = i%2 +1;
            }
            else{
                if(mp[s[i]]!= (i%2 +1))
                {
                    hobe = 0;
                    break;
                }
            }
        }
        if(hobe==1) Y;
        else N;
    }
    
   
    return 0;
}