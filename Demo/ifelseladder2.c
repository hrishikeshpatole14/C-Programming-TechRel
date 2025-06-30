// wap program to accept marks and calculate total n avg and then display grade using else if ladder

#include<stdio.h>
int main(){
    int id ;
    char name;
    float m1 , m2 , m3 , total , avg ;

    printf("Enter your id:");
    scanf("%d",&id);

    printf("Enter your Name:");
    scanf("%s",&name);

    printf("Enter marks of m1:");
    scanf( "%f",&m1);
    
    printf("Enter marks of m2:");
    scanf( "%f",&m2);

    printf("Enter marks of m3:");
    scanf( "%f",&m3);

    total = m1+m2+m3;
    avg=total/3;

    printf("\nTotal marks:%.2f",total);
    printf("\nAvg:%.2f",avg);
    

    if(avg<100 && avg>90)
    printf("\nGrade A");

    else if(avg<90 && avg>80)
    printf("\nGrade B");

    else if(avg<80 && avg>70)
    printf("\nGrade C");

    else if(avg<70 && avg>50)
    printf("\nGrade D");

    else if(avg<50 && avg>35)
    printf("\nGrade E");

    else
    printf("\nFail");

    return 0;



}

