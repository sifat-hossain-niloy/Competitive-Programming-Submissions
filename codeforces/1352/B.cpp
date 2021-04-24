#include<bits/stdc++.h>
#include<cmath>
#include<cstring>

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
        int n,k;
        cin >> n >> k;

        if (n%2)
        {
            if (k%2)
            {
                if (k>n) cout << "NO\n";
                else {
                    cout << "YES\n" << n-k+1 << " ";
                    for (int i = 1;i<k;i++) cout << 1 << " ";
                    cout << endl;
                }
            }
            else 
            {
                cout << "NO\n";
            }

        }
        else{
            if (k%2)
            {
                if (k>n/2) cout << "NO\n";
                else{
                    cout << "YES\n"<< n-(k-1)*2 << " ";
                    for (int i = 1;i<k;i++) cout << 2 << " ";
                    cout << endl;
                }
            }
            else{
            
                if (k>n) cout << "NO\n";
                else{
                    cout << "YES\n";
                    cout << n-k+1 << " ";
                    for (int i = 1;i<k;i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << endl;
                }
            }
        }
    }

    return 0;
}
