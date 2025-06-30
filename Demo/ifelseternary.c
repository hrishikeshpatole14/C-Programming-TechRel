

#include<stdio.h>

 int main()
 {
    int a , b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
  
    /*      if(a>b)
          printf("max is %d",a);

           else
         printf("max is %d",b); 
*/

printf("max is %d",(a>b)? a:b); // ternary operator

return 0;

 }

