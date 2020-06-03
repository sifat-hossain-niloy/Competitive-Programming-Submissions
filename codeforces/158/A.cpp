#include<stdio.h>

int main ()
{
    int n,k,m;
    scanf("%d %d",&n,&k);

    int a[n],i,j =0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
            for(m=0;m<n;m++){

                if(a[m]>= a[k-1] && a[m]>0){
                j++;
            }

        else{
            break;

        }
    }

printf("%d",j);

return 0;

}

