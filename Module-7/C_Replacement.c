#include <stdio.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i] >0)
        {
            arr[i] = 1;
        }else if (arr[i] <0)
        {
            arr[i] = 2;
        }
        printf("%d ",arr[i]);
    }


    return 0;
}