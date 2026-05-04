#include <stdio.h>

int main()
{
    int A;
    int num;
    scanf("%lld",&A);
    num = A/1000;

    if(num%2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}