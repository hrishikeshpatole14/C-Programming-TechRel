#include<stdio.h>

int main(){
    int units;
    float amt=0;
      
     printf("Enter the units:");
     scanf("%d",&units);

     if (units>=100)
     {
        amt=amt +(100*8);
        units -=100;
        if (units>=100)
        {
            amt = amt +(100*10);
            units -=100;
            if (units>=100)
            {
                amt = amt +(100*12);
                units -=100;
                if (units>=100)
                {
                   amt = amt +(100*15);
                   units -=100;
                   if (units>0)
                   {
                    amt= amt +(units*17);

                   }
                   else
                   amt = amt +(units*15);
                   
                }
            else 
            amt = amt +(units*12);
                
            }
            else
            amt = amt +(units*10);
        }
        else
        amt = amt +(units*8);
        printf("Amount is %f",amt);
     }
     

}