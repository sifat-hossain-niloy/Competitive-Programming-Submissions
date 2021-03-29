#include<iostream>
#include<string.h>
#include<sstream>
#include<algorithm>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int getSum(unsigned ll int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stringstream g(s);

        unsigned ll int x = 0;
        unsigned ll int  ans=-1,sum;

        g >> x;

        for ( unsigned ll int j = x; ; j++){

            sum = getSum(j);
            if ( __gcd(sum,j)>1)
            {
                ans = j;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
