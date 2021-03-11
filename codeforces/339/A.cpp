#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
    string s ;
    cin >> s;
    int o=0,t=0,th=0;

    for (int i = 0; i<s.size();i+=2)
    {
        if (s[i]=='1') o++;
        else if (s[i]=='2') t++;
        else th++;
    }

    for (int i = 0;i<s.size()/2+1;i++)
    {
        if (o){
            cout << '1';
            o--;
        }
        else if (t)
        {
            cout << '2';
            t--;
        }
        else if (th)
        {
            cout << '3';
            th--;
        }
        if (i!=s.size()/2) cout << "+";
    }
}
