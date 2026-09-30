#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, area;
    float pi = 3.14159;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area = %.2f\n", area);
    return 0;
}
