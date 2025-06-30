 #include<stdio.h>
 int main()
 {
    float u , a ,t ,v , s ;

    printf("\nEnter the initial velocity:");
    scanf("%f",&u);
    printf("\nEnter the acceleration:");
    scanf("%f",&a);
    printf("\nEnter the time:");
    scanf("%f",&t);

    v=u+a*t;
    s=u+a*t*t;

    printf("\nFinal velocity is:%.2f",v);
    
    printf("\nDistance is:%.2f",s);

    return 0;


 }
