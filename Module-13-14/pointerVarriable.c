#include <stdio.h>

void changeWithFunctionVarriableValue(int* p){
    *p = 30;
    return;
}

int main()
{
    int x = 10;
    
    printf("Before change with pointer, X value: %d\n",x);
    printf("Before change with pointer, X address: %p\n",&x);

    int* ptr = &x;
    printf("X value address stored in ptr: %p\n",&x);
    printf("And Pointer varriable has address:%p\n",&ptr);

    *ptr = 20;
    printf("After change value with pointer varrible, X Value:%d\n",x);
    changeWithFunctionVarriableValue(&x);
    printf("Now X Value is:%d\n",x);
    // scanf("%d",&x)// thats why in scanf need address also &, becouse value need change with address not in fun scop only.

    int a[5]= {1,2,3,4,5};//here a is pointer var of 1st ele in arr
    printf("Lets prove:%p\n",&a);
    printf("See same prove:%p\n",&a[0]);

    *a = 100; //using its pointer we can cng ele also
    printf("a[0] :%d\n",a[0]);
    *(a+1) = 200;//next ele/ next 4 byte
    printf("a[1] :%d\n",a[1]);


    return 0;
}