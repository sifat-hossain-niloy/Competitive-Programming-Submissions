#include<iostream>
#include<cmath>
#include<vector>
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
    
    int n,m;
    cin >> n;
    int a[n];
    FL(n) cin >> a[i];
    cin >> m;
    int b[m];
    FL(m) cin >> b[i];

    sort(a,a+n);
    sort(b,b+m);

    int cnt = 0;

    for (int i=0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            if (abs(a[i]-b[j])<=1 && a[i]!=0 && b[j]!=0 )
            {
                a[i] = 0; 
                b[j] = 0;
                cnt++;
                //cout << i << " " << j << endl;
                break;
            }
            
        }
        
    }
    cout << cnt << endl;

    return 0;
}
