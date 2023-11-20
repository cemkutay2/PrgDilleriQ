#include <stdio.h>
#include <math.h>

float getVolume(float radius)
{
    return (4.0 / 3) * M_PI * radius * radius * radius;
}

int main()
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("Volume of the sphere is: %f", getVolume(radius));

    return 0;
}