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
        cin >> n;

        string s ;
        cin >> s;
        int t = 0,m = 0,cnt = n/3;
        bool parbe = true;

        FL(n)
        {
            if (s[i]=='T') 
            {
                t++;
                if (t>cnt && m==0 || t-cnt > m)
                {
                    parbe = false;
                    break;
                }

            }
            else 
            {
                m++;
                if (m>t )
                {
                    parbe = false;
                    break;
                }
            }

           
            
        }
        if (t!=2*cnt)
        {
            parbe = false;
        }
        if (parbe)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
