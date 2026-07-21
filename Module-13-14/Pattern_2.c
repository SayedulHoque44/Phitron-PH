#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int star =1 ;
    int space = n-1;
    int isHash = 1;

    for(int i=0; i<n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }

        for(int j=star; j>=1;j--){
           printf("%d",j);
        }
        printf("\n");
        star++;
        space--;
       
    }

    
    return 0;
}