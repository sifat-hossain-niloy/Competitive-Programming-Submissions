#include<bits/stdc++.h>
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
    ll int p = 1;
    
    vector<int> c;

    for (int i = 0; i<n;i++)
    {
        if (__gcd(i,n)==1)
        {
            c.push_back(i);
            p = p*i%n;
        }
    }
    if (p!=1)
    {
        cout << c.size()-1 << endl;
        for (int x:c)
        {
            if (x==p) continue;
            else cout << x << " ";
        }
    }
    else
    {
        cout << c.size() << endl;
        for (int x:c)
        {
            cout << x << " ";
        }
    }
 
    

    
    return 0;
}
