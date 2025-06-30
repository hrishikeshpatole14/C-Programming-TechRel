#include<stdio.h>
int main()
{
    int l , b , h;
    float surfacearea , volume;

    printf("Enter the length of cuboid:");
    scanf("%d",&l);
    printf("Enter the breadth of cuboid:");
    scanf("%d",&b);
    printf("Enter the height of cuboid:");
    scanf("%d",&h);

    surfacearea=2*((l*b)+(l*h)+(b*h));
    volume=l*b*h;

    printf("\nSurface area of cuboid is:%.2f",surfacearea);
    printf("\nVolume of cuboid is:%2.f",volume);

    return 0;

}