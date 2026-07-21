#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
      int target =0;
    scanf("%d",&target);

    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i =0;i<n-1;i++)
    {
        int isNeedBreak=0;
        for(int j=i+1;j<n;j++)
        {
            // printf("a[%d] a[%d] = a[%d] a[%d] \n",i,j,a[i],a[j]);
            if(a[i]+a[j] == target)
            {
                printf("%d %d -------",i,j);
                isNeedBreak++;
                break;
            }
        }
        if(isNeedBreak){
            break;
        }
    }


    return 0;
}