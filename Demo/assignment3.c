 
 //temperature//
 
 
 #include<stdio.h>

 int main()
 {
    float f , c , k;
    
    printf("\nEnter the temperature in Fahrenheit:");
    scanf("%f",&f);

    c = (5.0/9.0)*(f-32);
    
    k = c+273.15;

    printf("\nTemperature in Celsius:%.2f",c);
    printf("\nTemperature in Kelvin:%.2f",k);
    

    

    return 0;

 }