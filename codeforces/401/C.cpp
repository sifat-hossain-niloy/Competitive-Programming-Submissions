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
    
    int t;
    t = 1;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if((2*a+2) <b || a> b+1)
        {
            cout << -1 << endl;
        }   
        else{
            string s,d;
            if(2*b>a && b >a)
            {
                s = "110";
                d = "10";
            }
            else{
                s = "011";
                d = "01";
            }
            while(a>0 && b>0)
            {
                if(a<b)
                {
                    a--;
                    b-=2;
                    cout << s;
                }
                // else if(a>b)
                // {
                //     a--;
                //     b-=2;
                //     cout << "110";
                // }
                else{
                    a--;
                    b--;
                    cout << d ;
                }
            }
            while(a>0)
            {
                a--;
                cout << '0';
            }
            while(b>0)
            {
                b--;
                cout << '1';
            }
        }
        
    }
    
    return 0;
}