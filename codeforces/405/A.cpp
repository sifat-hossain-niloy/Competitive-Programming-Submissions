#include<iostream>
#include<cmath>
#include<algorithm>

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
    int a[t];

    FL(t) cin >> a[i];

    sort(a,a+t);
    FL(t) cout << a[i]<< ' ';

    return 0;
}
