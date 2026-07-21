#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[100001];
    scanf("%s",&s);
    char withoutConsonents[5]={'a','e','i','o','u'};
    int consonentCount =0;
    int len = strlen(s);

    for(int i=0; i<len; i++)
    {
        int isVowel =0;
        for(int j =0; j<5;j++)
        {
            if(s[i]==withoutConsonents[j])
            {
                isVowel =1;
            
            }
        }

        if(!isVowel){
            consonentCount++;
        }
    }
    printf("%d",consonentCount);
    return 0;
}
