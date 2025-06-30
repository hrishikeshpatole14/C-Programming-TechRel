 //The interior wall area to be painted (excluding door and two windows).
//The roof (ceiling) area to be whitewashed.
//Room is rectangular with length, width, height
//Door and windows are rectangles
//There are 4 walls: 2 of size length x height, 2 of size width x height
//Total wall area = 2 * (length + width) * height
//Paint area = Total wall area − Area of door − 2 × Area of one window
//Whitewash area = length × width (ceiling area)

#include <stdio.h>

int main() {
    float length, width, height;
    float doorWidth, doorHeight;
    float windowWidth, windowHeight;
    float wallArea, doorArea, windowArea, paintArea, whitewashArea;

    // Input room dimensions
    printf("Enter room length, width and height (in meters): ");
    scanf("%f %f %f", &length, &width, &height);

    // Input door dimensions
    printf("Enter door width and height (in meters): ");
    scanf("%f %f", &doorWidth, &doorHeight);

    // Input window dimensions (both windows are same size)
    printf("Enter window width and height (in meters): ");
    scanf("%f %f", &windowWidth, &windowHeight);

    // Calculate areas
    wallArea = 2 * (length + width) * height;
    doorArea = doorWidth * doorHeight;
    windowArea = windowWidth * windowHeight;

    paintArea = wallArea - doorArea - 2 * windowArea;
    whitewashArea = length * width;

    // Output results
    printf("\nArea to be painted (interior walls): %.2f sq.meters", paintArea);
    printf("\nArea to be whitewashed (roof): %.2f sq.meters\n", whitewashArea);

    return 0;
}


