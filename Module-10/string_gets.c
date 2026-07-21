#include <stdio.h>
#include <string.h>
int main()
{
    //Input: SAYEDUL HOQUE ALMUN
    char ch[20];
    fgets(ch,11,stdin); // (varriable ,size, stdin), 0-10 = 11 size
    printf("%s",ch); // SAYEDUL HO -> ch[10] = null
    return 0;
}

