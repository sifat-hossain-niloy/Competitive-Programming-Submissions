#include<iostream>
#include<cmath>
#include<cstring>

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
        int n , k, cnt = 0, cx = 0, ls , temp = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0;i<n;i++)
        {
            if (s[i]== '*')
                ls = i ;
        }
        bool paisi = false;
        for (int i = 0; i<=ls;i++)
        {
            if (s[i]=='*' && !paisi)
            {
                paisi =  true;
                cx++;
                cnt = 0;
                //cout << "FUCK 0";
            }

            else if (paisi)
            {
                cnt++;

                if (i == ls)
                {
                    cx++;
                    //cout << "FUCK 4";
                }

                else if (s[i]== '*' && cnt == k)
                {
                    cnt = 0;
                    cx++;
                    //cout << "fuck 1";

                }
                else if (s[i]== '*' && cnt < k )
                {
                    temp = i;
                 //   cout << "Fcuk 2";
                }

                else if (cnt == k)
                {
                    cnt  = (i-temp);
                    cx++;
                   // cout << "Fuck 3";
                }

            }
        }
        cout << cx << endl;

    }

    return 0;
}
