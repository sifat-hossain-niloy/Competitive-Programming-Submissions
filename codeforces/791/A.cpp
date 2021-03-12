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

int main()
    {
        int a,b,i;
        cin >> a >> b;

        for (i = 1; ; ++i)
        {
            int ans = pow(3,i)*a - pow(2,i)*b;
            if (ans>0) break;
        }
        cout << i;

    return 0;
}
