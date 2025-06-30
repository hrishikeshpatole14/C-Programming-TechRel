 #include<stdio.h>
 int main(){

 
 int h , m , s;

 printf("Enter the number of hours:");
 scanf("%d",&h);
 printf("Enter the number of minutes:");
 scanf("%d",&m);
 printf("Enter the number of seconds:");
 scanf("%d",&s);

      if(h>=0 && h<24)
         {
            if (m>=0 && m<60)
            {
                if (s>=0 && s<60)
                {
                    printf("\n Time is valid\n");
                }
                else 
                printf("\nSeconds are invalid%s",s);
                
            }
            else
            printf("\nMinutes are invalid%d",m);
            
         }
         else
            printf("\nHours are invalid%d",h);

      return 0;


 }

