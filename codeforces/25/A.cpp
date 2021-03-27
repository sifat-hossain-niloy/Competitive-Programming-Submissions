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

    int a[t],o = 0 , e = 0 , oi,ei;
    FL(t)
    {
        cin >> a[i];
        if (a[i]%2) {
            o++;
            oi = i+1;
        }
        else {
            e++;
            ei = i+1;
        }
    }
    if (o==1)
    {
        cout << oi;

    }
    else cout << ei;

    return 0;
}

