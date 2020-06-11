#include<stdio.h>
#include<iostream>


using namespace std;

int main (){

    int t;
    cin >> t;
    for(int x = 0;x<t;x++)
    {
        long long int s,d;
        cin >> s >> d;
        long long int k = (s+d)/3;
        d = min(s,d);
        cout << min(k,d)<<endl;
    }
return 0;
}
