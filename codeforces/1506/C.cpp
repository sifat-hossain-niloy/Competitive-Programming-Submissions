#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() < second.size();
    }
};

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        vector <string > sa,sb;

        for (int i=0;i<a.size();i++)

        {

            for (int j = i ;j<a.size();j++)
            {
                sa.push_back(a.substr(i,j-i+1));
            }
        }
        for (int i=0;i<b.size();i++)
        {

            for (int j = i ;j<b.size();j++)
            {
                sb.push_back(b.substr(i,j-i+1));
            }
        }

        compare c;

        sort(sa.begin(),sa.end(),c);
        sort(sb.begin(),sb.end(),c);

        int ans = -1;

        for (int i = 0;i<sa.size();i++)
        {
            for (int j = 0;j<sb.size();j++)
            {
                if (sa[i] == sb[j])
                {
                    ans = i;
                }
            }
        }
        if (ans==-1)
        {
            int res = a.size()+ b.size();
            cout << res << endl;
        }
//        else if (a.size()==1 && b.size()==1)
//            cout << 0 << endl;
        else{
            int res = a.size()+ b.size()- 2*sa[ans].size();
            cout << res << endl;
        }
    }

    return 0;
}

