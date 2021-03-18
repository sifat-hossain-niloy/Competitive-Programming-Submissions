#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        signed int w,b;
        cin >> w >> b;

        int wmax = max(k,l);
        int wmin = min(k,l);

        int bmax =  n - wmin;
        int bmin =  n - wmax;

        w -= (wmin + (wmax-wmin)/2);
        b -= (bmin + (bmax-bmin)/2);

        if ( b<1 && w<1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
