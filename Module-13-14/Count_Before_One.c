#include <stdio.h>


int count_before_one(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i] == 1){
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int c = count_before_one(a,n);
    printf("%d",c);
    return 0;
}