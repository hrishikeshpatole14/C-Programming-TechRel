 #include<stdio.h>
 int main()
 {
    int a ,b ,c , e , f , h ,i ;

    printf("Enter value for a:");
    scanf("%d",&a);

    printf("Enter value for b:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\nInterchange value of a:%d",a);
    printf("\nInterchange value of b:%d",b);
    
    printf("\nEnter value for e:");
    scanf("%d",&e);

    printf("Enter value for f:");
    scanf("%d",&f);

    e=e+f;
    f=e-f;
    e=e-f;

    printf("\nInterchange value e:%d",e);
    printf("\nInterchange value f:%d",f);

    printf("\nEnter value for h:");
    scanf("%d",&h);

    printf("Enter value for i:");
    scanf("%d",&i);

    h=h*i;
    i=h/i;
    h=h/i;

    
    printf("\nInterchange value h:%d",h);
    printf("\nInterchange value i:%d",i);

    return 0;


 }