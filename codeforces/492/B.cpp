#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)


int main(){

    int n,l;
    cin >> n >> l;
    int a[n];
    double len = -1;

    FL(n) cin >> a[i];
    sort(a,a+n);

    if (a[0]!=0) len = a[0];

    for ( int i=1;i<n;i++)
    {
            double x = a[i]-a[i-1];
            x/=2.0;
            len = max(len,x);
    }
    if (a[n-1]!= l)
    {
        len = max(len,l-a[n-1]*1.0);
    }

    printf("%.10lf",len);

    return 0;
}
