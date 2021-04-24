#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;sc("%d",&t);while(t--)
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
        int n,m;
        cin >> n >> m;
        multiset<pair<int,int>> s;

        int r[n][m];

        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                int x;
                cin >> x;
                s.insert({x,i});
                r[i][j] = -1;
            }
        }

        for (int i = 0;i<m;i++)
        {
            auto itr = s.begin();

            r[itr->second][i] = itr->first;
            s.erase(itr);
        }

        while (!s.empty())
        {
            auto itr = s.begin();
            int i = 0;
            while (r[itr->second][i]!=-1)
            {
                i++;
            }
            r[itr->second][i] = itr->first;
            s.erase(itr);

        }
        for (int i = 0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                cout << r[i][j] << " ";
            }
            cout << endl;
        }


    }

    return 0;
}
