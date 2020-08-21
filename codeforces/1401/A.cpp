#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long


int main(){

    int t;
    cin >> t;

    while (t--)
    {
           int n,k;
        cin>> n >> k;

        if (n<k){
            cout<< (k-n)<<endl;
        }
        else {
           int x =  n-k;
           if (x%2 ) {
                cout << "1" << endl;
           }
           else {
            cout << "0" << endl;
           }
        }

    }

    return 0;
}

