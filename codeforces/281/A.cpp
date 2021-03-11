#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    if (!isupper(s[0])) putchar(toupper(s[0]));
    else cout << s[0];

    for (int i = 1 ; i < s.size() ; i++){
        cout << s[i];
    }
    cout << endl;


    return 0;
}
