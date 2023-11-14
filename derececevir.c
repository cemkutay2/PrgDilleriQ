#include <stdio.h>

float toFahrenheit(float cels);
float toKelvin(float cels);

int main()
{
    float celsius;
    printf("Celsius gir: ");
    scanf("%f", &celsius);
    float fahrenheit = toFahrenheit(celsius);
    float kelvin = toKelvin(celsius);
    printf("%f Fahrenheit, %f Kelvin", fahrenheit, kelvin);
    if (fahrenheit > 100)
        printf("Dikkatli olun.");

    return 0;
}

float toFahrenheit(float cels)
{
    return cels * (9.0 / 5) + 32;
}

float toKelvin(float cels)
{
    return cels + 273.15;
}