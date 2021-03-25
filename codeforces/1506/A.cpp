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
        ll int n,m,x;
        cin >> n >> m >> x;

        ll int  a,b;

        if (x%n == 0) a = x/n;
        else a = x/n+1;
        b = x - (a-1)*n;

        //cout << a << "fuck " << b << endl;

        unsigned ll int  ans = (b-1)*m +a;
        cout << ans << endl;
    }

    return 0;
}
