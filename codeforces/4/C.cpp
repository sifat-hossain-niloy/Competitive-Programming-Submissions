#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int n;
    cin >> n ;
    string  x;
    int a[n] = {0};

    vector<string > s;

    for (int i = 0;i<n;i++)
    {
        cin >> x;

        s.push_back(x);

        bool paisi =  false;
        for (int j = 0;j<i;j++)
        {
            if (x==s[j])
            {
                paisi = true;
                a[j]++;
                cout << x<<a[j] << endl;
                break;
            }
        }
        if (!paisi) cout << "OK" << endl;
    }

    return 0;
}

