 


 #include<stdio.h>
 int main() {

    int a , b, c;
    printf("Enter value for a , b ,c:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>c)                                  // take >= operator
    printf("\nGreatest is a %d",a);

    else if(b>a && b>c)
    printf("\nGreatest is b %d",b);

    else
    printf("\nGreatest is c %d",c);

    return 0;
 }

 

      




