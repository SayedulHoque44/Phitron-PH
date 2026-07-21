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

        for(int j=1; j<=star;j++){
            if(isHash){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        star+=2;
        space--;
        if(isHash){
            isHash=0;
        }else{
            isHash=1;
        }
    }

    star = 2*n-3;
    space=1;
    for(int i=0; i<n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }

        for(int j=1; j<=star;j++){
             if(isHash){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        star-=2;
        space++;
         if(isHash){
            isHash=0;
        }else{
            isHash=1;
        }
    }
    return 0;
}