 #include<stdio.h>
 int main(){
    float cp , sp , p , l ;

    printf("Enter the cost price:");
    scanf("%f",&cp);
    
    printf("Enter the selling price:");
    scanf("%f",&sp);
    
    p = sp - cp ;
    l = cp - sp ;




    (cp>sp)?printf("\n has made a loss of %.2f",l):printf("\n has made a profit of %.2f",p);
    return 0;

 }