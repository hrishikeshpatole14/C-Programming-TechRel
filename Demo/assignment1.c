 
 //area and circumference of circle//
 
 #include<stdio.h>

 int main()
 {

     int r;
     float area , circumference;

    printf("\nEnter the radius of circle:");
    scanf("%d",&r);

    area = 3.14*r*r;
    circumference = 2*3.14*r;

    printf("\nArea of Circle is:%.2f",area);
    printf("\nCircumference is:%.2f",circumference);


    return 0;

 }