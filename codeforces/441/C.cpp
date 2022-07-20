#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){
    Fastio
    
    int t;
    //cin >> t;
    t = 1;
    while(t--)
    {
        int n,m,k;
        cin >>  n >> m>> k;

        ll mul = n*m;
        int x = 1,y = 1;
        int p = 0;

        for (int i = 0;i<k;i++)
        {
            if(i==k-1)
            {
                cout << mul << " ";
                for (int i = 0;i<mul;i++)
                {
                    cout << x << " " <<  y << " ";
                    if(y==m)
                    {
                        if(p==0)
                        {
                            x++;
                            p = 1;
                        }
                        else{
                            y--;
                        }
                    }
                    else if(y==1)
                    {
                        if(p==1)
                        {
                            x++;
                            p =0;
                        }
                        else{
                            y++;
                        }
                    }
                    else{
                        if(p==0) y++;
                        else y--;
                    }
                    
                }


            }
            else{
                cout << 2 << " ";
                mul-=2;
                //cout << x << " "<< y << " ";
                
                for (int i = 0;i<2;i++)
                {
                    cout << x << " " <<  y << " ";
                    if(y==m)
                    {
                        if(p==0)
                        {
                            x++;
                            p = 1;
                        }
                        else{
                            y--;
                        }
                    }
                    else if(y==1)
                    {
                        if(p==1)
                        {
                            x++;
                            p =0;
                        }
                        else{
                            y++;
                        }
                    }
                    else{
                        if(p==0) y++;
                        else y--;
                    }
                    
                }

            }
            cout << endl;
        }
        
        
    }
    
    return 0;
}