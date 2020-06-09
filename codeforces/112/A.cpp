#include<stdio.h>
#include<string.h>

int main ()
{
    char s1[100],s2[100];

    scanf("%s\n%s",s1,s2);

    strlwr(s1);
    strlwr(s2);
    int def = 0;

    for(int i = 0;i<strlen(s1);i++){

        if (s1[i] == s2[i]){
            continue;
        }

        else if(s1[i]>s2[i]){
            def = 1;
            break;
        }

        else if(s1[i]<s2[i]){
            def = -1;
            break;
        }
    }

    printf("%d",def);

    return 0;
}
