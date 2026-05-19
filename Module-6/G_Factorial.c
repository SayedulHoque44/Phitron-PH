#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int f;
        int output =1;
        scanf("%d",&f);
       for(int j=1;j<=f;j++){
        output *=j;
       }
       printf("%d \n",output);
    }
    return 0;
}