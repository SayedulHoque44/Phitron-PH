#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    int two=0,three=0;

    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i =0; i<n;i++)
    {
        if(a[i]%2==0){
            two++;
        }else if(a[i]%3==0)
        {
            if(a[i]%2==0)
            {
                two++;
            }else{
                three++;
            }
        }
    }
    printf("%d %d",two,three);

    return 0;
}