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
        ll n;
        cin >> n;

        if (n%2) cout << "YES" << endl;

        else{
            while (n>2)
            {
                n = n/2;

                if (n%2)
                {
                    cout << "YES" << endl;
                    break;
                }

                else continue;

            }
            if (n==1|| n==2) cout << "NO"<< endl;
        }

    }

    return 0;
}
