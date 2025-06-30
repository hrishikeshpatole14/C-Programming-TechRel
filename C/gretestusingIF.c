 #include<stdio.h>
 #include<math.h>

 int main()
 {
    int a , b ,c , max ;

    printf("\nEnter value for a , b ,c:");
    scanf("%d %d %d",&a,&b,&c);

   /* if (a>b)
    b=a;
    if (c>b)
    b=c;
    printf("\nMax is %d",b);
   */
  
 /*  b=(a>b)? a:b;
   a=(c>b)? c:b;
   printf("\nMax is%d",b);

*/

 /* 
 max=(a>b)?(a>c)?a:c:(b>c)?b:c;
printf("\nMax is:%d",max);
*/

printf("\nMax is %.0f",fmax(a , fmax(b,c)));


   


 return 0;


 }