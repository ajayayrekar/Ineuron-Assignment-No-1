#include <stdio.h>
#define PI 3.14

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of circle is %.2f having the radius %.2f\n", area, radius);
    return 0;
}
