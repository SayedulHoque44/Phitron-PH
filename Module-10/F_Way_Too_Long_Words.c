#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        char w[101];
        scanf("%s", &w);
        int count = 0;
        for(int i=0; w[i] != '\0'; i++)
        {
            count++;
        }

        if(count >10)
        {
            char f;
            char l;
            int count2=0;

            for(int i=0; i <count; i++){
                if(i==0){
                     f=w[i];
                }else if(i==count-1)
                {
                    l=w[i];
                }else{
                    count2++;
                }

            }
            printf("%c%d%c\n",f,count2,l);
        }else{
            printf("%s\n",w);
        }
        
        
    }
    return 0;
}