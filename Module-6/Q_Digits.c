#include <stdio.h>

int main()
{
    int t;// Testcase input
    scanf("%d",&t);
    for(int i=0; i<t; i++){ // Taking testcase input by loop t times
        int n;
        scanf("%d",&n);
        do{
            int lastD = n%10;
            printf("%d ",lastD);
            n /=10; // 121 \10 = 12, if add more 0 then more last digit will remove
        }while(n != 0);
        printf("\n");

    }
    return 0;
}