#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){
    
    ll int n; cin >> n;
    set<int> s;


    ll int a[n],ma = INT64_MIN,mi = INT64_MAX;

    FL(n){
        cin >> a[i];
        s.insert(a[i]);
        ma =  max(ma,a[i]);
        mi =  min(mi,a[i]);
    }
    sort(a,a+n);

    ll int  maxcnt = 0,mincnt = 0;

    
    for (int i = 0; i<n; i++)
    {
        if (a[i]==mi)
        {
            mincnt++;
        }
        else if (a[i]==ma)
        {
            maxcnt++;
        }
    }
    if (mi == ma)
    {
        cout << 0 << " " <<n*(n-1)/2<< endl;

    }
    else 
        cout <<ma-mi << " " << maxcnt*mincnt << endl;

    return 0;
}
