 // surface area and volume of circle//
 
 
 #include<stdio.h>
 int main()
 {
    int r , h ;
    float surfacearea , volume;

    printf("\nEnter the radius of the cylinder:");
    scanf("%d",&r);
    printf("\nEnter the height of the cylinder:");
    scanf("%d",&h);


    surfacearea = 2*3.14*r*r+2*3.14*h;
    volume = 3.14*r*r*h;

    printf("\nSurface Area of cylinder is:%.2f",surfacearea);
    printf("\nVolume of cylinder is:%.2f",volume);

    return 0;

 }