#include <bits/stdc++.h>

using namespace std;
#define int long long
const int mod = 1e9 + 7;

int lgput(int x,int p)
{
    int rez = 1;
    while(p > 0)
    {
        if(p & 1)
        {
            rez = (1ll * rez * x) % mod;
        }
        x = (1ll * x * x) % mod;
        p >>=1;
    }
    return rez;
}


main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int v[2][n];
        int next[n + 1];
        bool viz[n + 1];

        for(int i = 1; i <= n; i++)
            viz[i] = false;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < n; j++)
                cin >> v[i][j];

        bool ok = true;
        for(int i = 0; i < n; i++)
            if(v[0][i] == v[1][i])
            {
                ok = false;
            }
            else
                next[v[0][i]] = v[1][i];

        if(ok == false)
            cout << 0 <<'\n';
        else
        {   
            int cnt = 0;
            for(int i = 1; i <= n; i++)
                if(viz[i] == false)
                {
                    viz[i] = true;
                    int x = next[i];

                    while(viz[x] == false)
                    {
                        viz[x] = true;
                        x = next[x];
                    }
                    cnt++;
                }

            cout << lgput(2, cnt) <<'\n';
        }
    }

    return 0;
}