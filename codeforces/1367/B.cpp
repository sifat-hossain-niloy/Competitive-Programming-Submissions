#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--){

    int n;
    cin >> n;
    int a[n],j=0,k=0;
    for(int i= 0;i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        if((i%2)!= (a[i]%2)){
            if(i%2==1){
                j++;
            }
            else{
                k++;
            }
        }

    }
    if(j==k){

        cout<< j <<endl;
    }
    else{
        cout<< -1 <<endl;
    }

    }

    return 0;
}
