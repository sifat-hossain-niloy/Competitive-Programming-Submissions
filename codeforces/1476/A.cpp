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
        ll n,k;
        cin >> n>>k;

        if ( k>n)
        {
            if (k%n==0) cout << k/n<< endl;
            else cout << k/n+1<< endl;
        }
        else{
            int ans =1;
            if (n%k==0)cout << 1 << endl;
            else cout << 2 << endl;
        }
    }

    return 0;
}

