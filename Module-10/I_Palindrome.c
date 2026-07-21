#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s",s);

    int flag =1;

    int i=0;
    int j = strlen(s) - 1;

    while(i<j)
    {
        if(s[i] != s[j])
        {
            flag =0;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
       printf("YES");
    }else
    {
        printf("NO");
    }
    

    return 0;
}