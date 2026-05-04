#include <stdio.h>
#include <limits.h>
int main()
{
    int n=0;
    int max= INT_MIN;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int val=0;
        scanf("%d",&val);
        if(val>max){
            max=val;
        }
    }
    printf("%d",max);
    return 0;
}