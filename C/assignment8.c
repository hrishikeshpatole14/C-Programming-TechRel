 #include<stdio.h>
 
 int main()
 {

    int id;
    float da , hra , tax , bs, hs;

    printf("Enter the employee id:");
    scanf("%d",&id);

    printf("Enter employee basic salary:");
    scanf("%f",&bs);

    da=30;
    hra=10;
    tax=5;

    hs = bs+((bs*(da+hra))/100);
    
    printf("\n Employee id is :%d",id);
    printf("\n Dearness allowance(%%):%f",da);
    printf("\n House renting(%%):%f",hra);
    printf("\n Tax (%%):%f",tax);
    printf("\n Basic Salary is:%f",bs);
    printf("\n Home Salary is:.%f",hs);

    return 0;


 }