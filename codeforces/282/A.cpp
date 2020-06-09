#include<stdio.h>

int main ()
{
    int n,i,X = 0;
    scanf("%d",&n);

    char x[10];

    for (i=0;i<n;i++)
    {
        scanf("%s",x);

        if(x[1]== '+'){
            X += 1;
        }
        else if (x[1] == '-'){
            X -= 1;
        }



    }

    printf("%d",X);

    return 0;
}
