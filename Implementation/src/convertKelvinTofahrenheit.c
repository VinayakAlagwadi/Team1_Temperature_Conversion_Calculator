#include <stdio.h>

void convertKelvinTofahrenheit(float kelvin, float fahrenheit)
{
    printf("Enter a temp in kelvin: ");
    scanf("%f", &kelvin);
    fahrenheit = ((kelvin - 273.15) * 9) / 5 + 32;
    printf("%.2fK is same as %.2fF", kelvin, fahrenheit);
}
