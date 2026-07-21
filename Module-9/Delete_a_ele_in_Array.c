#include <stdio.h>

int main()
{
    int s=0;
    scanf("%d",&s);
    
    int arr[s];
    for(int i=0; i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    int removeIdx;
    scanf("%d",&removeIdx);

    for(int i=removeIdx;i<s-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0; i<s-1;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}