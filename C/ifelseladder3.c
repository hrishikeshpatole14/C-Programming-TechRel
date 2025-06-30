//wap to accept emp details like eid , name , bs , da , hra
//calculate tax , totalsalary , inhand

#include<stdio.h>


int main(){

    int eid;
    char ename[100];
    float bs, da, hra , totalsalary, inhand , tax;
    FILE *fp; //file pointer


    fp = fopen("Employee Salary Slip.txt","w");


    printf("Enter Employee Details :");
    printf("ID :");
    scanf("%d",&eid);
    printf("Name :");
    scanf("%s",&ename);
    printf("Basic Salary :");
    scanf("%f",&bs);
    printf("Daily Allowance :");
    scanf("%f",&da);
    printf("House Rent Allowance :");
    scanf("%f",&hra);
    
    if(bs>=100000)
     tax=20;
     else if( bs>=80000)
     tax=15;
     else if(bs>=50000)
     tax=10;
     else if(bs>=30000)
     tax=5;
     else
     tax=0;


     totalsalary= bs+((bs*(da+hra))/100);
     inhand = totalsalary-(totalsalary*tax)/100;

     fprintf(fp,"\n\t\t--------------------------------------Employee Salary Slip----------------------------------------");
     fprintf(fp,"\n\t\tID                               :%d",eid);
     fprintf(fp,"\n\t\tName                             :%s",ename);
     fprintf(fp,"\n\t\tBasic Salary                     :%f",bs);
     fprintf(fp,"\n\t\tDaily Allowance(%%)               :%f",da);
     fprintf(fp,"\n\t\tHouse Rent Allowance(%%)          :%f",hra);
     fprintf(fp,"\n\t\tTax(%%)                           :%f",tax);
     fprintf(fp,"\n\t\tTotal Salary                     :%f",totalsalary);
     fprintf(fp,"\n\t\tInHand                           :%f",inhand);

     return 0;



}