#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--){
        int n,m , x =0;
        cin >> n >> m;
        string s;

            for (int j = 0; j < n; j++){

                cin >> s;
                if ( j == n-1 ){
                    for (int k = 0 ;k < m-1 ; k++){
                        if ( s [k] != 'R'){
                            x++;
                        }
                    }
                }
                else if ( s[m-1] != 'D' ){
                    x++;
                }
                else {
                    continue;
                }


            }

        cout << x << endl;

    }
    return 0;
}

