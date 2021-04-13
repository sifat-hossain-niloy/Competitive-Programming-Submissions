#include<iostream>
#include<cmath>
#include<cstring>

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

    int n;
    cin >> n;

    unsigned ll int a[100001],ma = 0;
    ll int b[100001]={0};

    FL(n)
    {
        cin >> a[i];
        b[a[i]]++;
        ma =  max(ma,a[i]);
    }

    a[0]=0;
    a[1] = b[1];

    for (int i=2;i<=ma;i++)
    {
        a[i] =  max(a[i-1],a[i-2]+b[i]*i);
        
    }
    
    cout << a[ma];

    return 0;
}
