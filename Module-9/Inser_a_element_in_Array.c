#include <stdio.h>

int main()
{
    int s=0;
    scanf("%d",&s);
    
    int arr[s+1];
    for(int i=0; i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    int idx,val;
    scanf("%d %d",&idx,&val);
    for(int i=s; i>=idx+1; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[idx] = val;

      for(int i=0; i<s+1;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}