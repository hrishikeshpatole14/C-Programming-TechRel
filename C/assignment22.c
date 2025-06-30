 #include<stdio.h>

int main(){

     int s1 , s2 , s3;

     printf("Enter any three sides of triangle :");
     scanf("%d %d %d",&s1,&s2,&s3);

     if(s1+s2>=s3 &&  s2+s3>=s1 && s1+s3>=s2)
     {
           printf("Triangle is valid\n");
     }
     else{

     printf("Triangle is not valid\n");
     }
     return 0;


}