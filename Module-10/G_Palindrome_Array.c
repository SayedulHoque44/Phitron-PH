#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i =0;
    int j = n-1;
    int flag =1;
    while(i<j)
    {
        if(arr[i] != arr[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if(flag == 1)
    {
        printf("YES");
    }else{
         printf("NO");
    }

    

    return 0;
}