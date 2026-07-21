 #include <stdio.h>
 
 int main()
 {
     int t=0;
     scanf("%d",&t);

     for(int i =0;i<t;i++)
     {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);

       int newDays = (m1 * d) / (m1 + m2);
        int fewerDays = d - newDays;
        
        printf("%d \n", fewerDays);
        
     }
     return 0;
 }