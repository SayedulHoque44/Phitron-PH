#include <stdio.h>

int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0){

            sum +=  arr[i];
        }
    }

    
    printf("%d",sum);
    return 0;
}