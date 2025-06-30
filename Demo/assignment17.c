 #include<stdio.h>
 int main(){
   int num;

   printf("Enter the number:");
   scanf("%d",&num);

  /* if(num%5==0 && num%7==0)
   printf("\nNumber is divisible by both 5 and 7 %d",num);
   
   else
     printf("\nNumber is not divisible by both 5 and 7 %d",num);   
   */
    
     
       if(num%5==0){
              if(num%7==0)
              {
                printf("%d is divisible by both 5 and 7\n",num);
              } 
                  else
                  {
                    printf("%d is divisible by 5 but not by 7\n",num);
                  }   
               }
                  else
                  {
                    printf("%d  is divisible by 7 but not by 5\n",num);
                  }
       
     return 0;  


 }
