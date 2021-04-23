#include<iostream>
#include<cmath>
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
    
        int n;
        cin >> n;
        int b[n][n];

        
        for (int i = 0;i<n;i++)
        {
            cin >> b[i][i];
        }
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<i;j++)
            {
                b[i][j]=0;
            }
        }

        for (int i = 0;i<n;i++)
        {
            
            int x,y;
            x = i;
            y = i;
            int c = b[i][i]-1;
            
            while (c)
            {
                if (x-1>=0 && b[y][x-1]==0 )
                {
                    x--;
                    b[y][x] = b[i][i];
                    
                    c--;
                }
                
                else if (y<n-1 && b[y+1][x]==0 )
                {
                    y++;
                    b[y][x] = b[i][i]; 
                    c--;
                }
            }
        }
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<=i;j++)
            {
                cout << b[i][j] << " ";

            }
            cout << endl;
        }

    return 0;
}
