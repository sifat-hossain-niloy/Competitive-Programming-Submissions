#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,l,m;
    int a[10][10];

    for (i=1;i<6;i++){

        for(j=1;j<6;j++){

            scanf("%d",&a[i][j]);

            }
        }

        for(i=1;i<6;i++){
            for(j=1;j<6;j++){
                if(a[i][j]==1){
                l = i;
                m = j;

                }
            }
        }

    int k;
    k = (max(l,3)- min(l,3)) + (max(m,3)- min(m,3));
    printf("%d",k);
    return 0;
}
