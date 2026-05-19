#include <stdio.h>

int main()
{
    int d;
    scanf("%d",&d);
    for(int i =1; i<=d;i++){
        int sum =0;
        int x,y;
        scanf("%d %d",&x,&y);

      if(x<y){
          for(int j=x+1; j<y;j++){
            if(j%2 != 0){
                sum+=j;
            }
        }

      }else{
          for(int j=y+1; j<x;j++){
            if(j%2 != 0){
                sum+=j;
            }
        }

      }
              printf("%d\n", sum);

    }
    return 0;
}