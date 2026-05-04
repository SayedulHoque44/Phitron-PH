#include <stdio.h>

int main()
{
    int pass;
    // for(;scanf("%d",&pass);); same way but this one better look in while
    while(scanf("%d",&pass)){
        if(pass == 1999){
        printf("Correct\n");
        break;
    }else{
        printf("Wrong\n");
    }
    }
    return 0;
}