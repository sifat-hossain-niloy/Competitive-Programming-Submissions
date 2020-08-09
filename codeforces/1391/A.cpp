#include<iostream>
#include<stdio.h>

using namespace std;

    int main()
    {

        int t;
        cin >> t;

        while (t--){
            int n ,a ,b;
            cin >> n;

            if (n%2){
                a = n/2+1;
                b = n/2;
                for (int i = 0 ; i<n/2 ; i++){
                    cout << a << " " << b << " ";
                    a++ ; b-- ;
                }
                cout  << a << endl;

            }
            else {
                a = n/2+1;
                b = n/2;
                for (int i = 0 ; i<n/2 ;i++ ){
                    cout << a << " " << b << " " ;
                    a++ ; b-- ;
                }

            }
        }
        return 0;
    }
