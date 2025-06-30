#include<stdio.h>
int main()
{
    int n1 , n2 , arithmetic , harmonic;

    printf("Enter number 1:");
    scanf("%d",&n1);

    printf("Enter number 2:");
    scanf("%d",&n2);

    arithmetic=n1+n2;
    harmonic=(n1/n2)*(n1+n2);
    
    printf("\nArithmetic is:%d",arithmetic);
    printf("\nHarmonic is:%d",harmonic);

    return 0;

}