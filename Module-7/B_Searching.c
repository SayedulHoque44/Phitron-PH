#include <stdio.h>
int main ()
{
    int n=0;
    scanf("%d",&n);

    int arr[n];
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x=0;
    scanf("%d",&x);

    int value =-1;
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {

            value = i;
            break;
        }
    }
    printf("%d",value);
}