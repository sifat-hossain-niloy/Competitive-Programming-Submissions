#include<iostream>
#include<vector>
#include<algorithm>

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
        int n;
        cin >> n;
        int a[n];
        vector<int> b;

        FL(n)
        {
            cin >> a[i];

        }
        sort(a,a+n);

        if (a[0]!=0)
        {
            FL(n)
            {
                cout << a[i];
                if (i!=n-1)cout << " ";
                else cout << endl;
            }
        }

        else {
            cout << a[0]<< " ";

            for (int i =1;i<n;i++)
            {
                if(a[i]==a[i-1]) b.push_back(a[i]);
                else
                {
                    cout << a[i] << " ";
                }

            }
            for (int j = 0;j<b.size();j++) cout << b[j] << " ";

            cout << endl;

        }

    }

    return 0;
}

