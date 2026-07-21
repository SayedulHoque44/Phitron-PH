#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n;i++){
        char s[10001];
        int bc=0,sc=0,d=0;
        scanf("%s",&s);

        for(int i=0; i<strlen(s); i++)
        {
            if(s[i] >64 && s[i] <123){
                if(s[i] >40 && s[i] <91)
                {
                    bc++;
                }else{
                    sc++;
                }
            }else{
                d++;
            }
        }
        
        printf("%d %d %d \n",bc,sc,d);

    }
    return 0;
}