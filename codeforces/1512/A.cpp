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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll int ans = 0,temp =0,cnt=1001;
        cin >> n;
        ll int a[101],b[101]={0};
        FL (n) 
        {
            cin >> a[i];
            b[a[i]]++;
            temp = max(temp,a[i]);
            cnt =  min(cnt,a[i]);
        }
        if (b[temp]==1) ans = temp;
        else ans = cnt;

        for (int i = 0;i<n;i++)
        {
            if (a[i]==ans)
            {
                ans = i;
                break;
            }
            
        }
        cout << ans+1 << endl;
    }

    return 0;
}
