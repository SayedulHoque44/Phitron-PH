#include <stdio.h>
#include <string.h>
int main()
{
    char w[101];
    scanf("%s",w);

    for(int i=0;i<strlen(w); i++)
    {
        if(w[i] ==','){
            w[i] = ' ';
        } else if(w[i]>='A' && w[i]<'a')
        {
            w[i]+=32;
        }else if(w[i]>='a' && w[i]<='z')
        {
            w[i]-=32;
        }
    }

    printf("%s",w);

    return 0;
}