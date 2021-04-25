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
    
    int x1,y1,x2,y2,x3,y3,x4,y4,dy,dx;
    cin >> x1 >> y1>> x2>>y2;

    if (x1==x2)
    {
        dy = abs(y1-y2);
        dx = dy;

        y3 = y1;
        x3 = x1+dx;

        y4 = y2;
        x4 = x2+dx;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (y1==y2)
    {
        dx = abs(x1-x2);
        dy = dx;

        x3 = x1;
        y3 = y1+dy;

        x4 = x2;
        y4 = y2+dy;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else{
        dy = abs(y1-y2);
        dx = abs(x1-x2);
        if (dy!=dx)
        {
            cout << -1 << endl;
        }
        else{
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        }
    }

    return 0;
}
