
// Variable declaration and initialization
// #include <stdio.h>
// #include <stdbool.h>
// int main(){


//     int num1;
//     num1 = 10;
//     float num2 = 4.5;
//     char letter = 'A';
//     bool isTrue = true;
//     printf("Hello World!\n");
//     printf("num1 \t = %d\n", num1);
//     printf("num2 = %.1f\n", num2);
//     printf("letter = %c\n", letter);
//     printf("isTrue = %d\n", isTrue );


//     return 0;
// }


// User input and output formatting
// #include <stdio.h>
// #include <stdbool.h>
// int main(){


//     int a;
//     float b;
//     char c;
//     scanf("%d %f %c %d", &a,&b,&c);
//     printf("%d %.3f %c",a,b,c);

//     return 0;
// }


// If else statement
#include <stdio.h>
int main(){
    int num;
    printf("Enter your number: \n");
    scanf("%d",&num);
    if(num >=100){
        printf("Amra burger khabo");
    }
    else if (num > 50){
        printf("Amra pizza khabo");
    }
    else if (num > 20){
        printf("Amra sandwich khabo");
    }
    else{
        printf("Amra biscuit khabo");
    }

}