#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    float width;
    float perimeter;
    float area;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (height + width);
    area = (height * width);

    printf("Perimeter of rectangle = %f units \n", perimeter);
    printf("Area of rectangle = %f units \n", area);

    return 0;
}
