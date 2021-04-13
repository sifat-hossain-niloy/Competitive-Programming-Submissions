#include<iostream>
#include<algorithm>
#include<vector>

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

    vector < pair<int,int>> v,s,v1;;

    for (int i = 0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back( make_pair(y,x) );
        
    }
    for (int i = 0; i<n;i++)
    {
        v1.push_back( make_pair(v[i].first,v[i].second));
    }

    sort (v.rbegin(),v.rend());

    int k;
    cin >> k;

    int a[k],b[k],cost = 0,cnt=0;

    for (int i = 0;i<k;i++) cin >> a[i];
    for (int i = 0;i<k;i++) b[i] = a[i];

    sort(a,a+k);

    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<k;j++)
        {
            if (v[i].second<=a[j])
            {
                cost+=v[i].first;
                cnt++;  
                int q = 0;
                for (int l = 0;l<k;l++)
                {
                    if (b[l]==a[j] && b[l]!=0)
                    {
                        q = l;
                        b[l] = 0;
                        break;
                    }
                }
                a[j] = 0;
                for (int r = 0;r<n;r++)
                {
                    if (v[i].first==v1[r].first && v[i].second==v1[r].second)
                    {
                        s.push_back(make_pair(r+1,q+1));
                        v1[r].second = 0;
                        break;
                    }
                }
                
                break;
            }
        }
        if (cnt==k) break;
    }
    cout << cnt << " " << cost<< endl;

    for (int i = 0;i<cnt;i++)
    {
        cout << s[i].first << " " << s[i].second << endl;
    }

    return 0;
}
