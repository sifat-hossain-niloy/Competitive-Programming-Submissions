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
        int n;
        cin >> n;

        int a[n];
        long long ans = 0;
        bool flag = true;
        FL(n)
        {
            cin >> a[i];
            if(a[i]>i) ans +=(a[i]-i);
            else if (a[i]<i) ans -=(i-a[i]);
            if (ans < 0) flag = false;
        }

        if (ans>=0 && flag) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
