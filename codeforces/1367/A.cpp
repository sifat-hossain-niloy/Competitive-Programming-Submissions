#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--){
    char s [100],s1[100]="";

    cin >> s;
    int k = strlen(s);
        for(int i = 0,j= 0;i<=k ;j++,i+=2){
        if(i == k){
            s1[j]=s[i-1];
        }
        else{
            s1[j]=s[i];
        }
    }

    cout << s1<<endl;

}
    return 0;
}
