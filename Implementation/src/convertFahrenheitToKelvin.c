#include <stdio.h>
#include "convertFahrenheitToKelvin.h"
//convert Fahrenheit To Kelvin
void convertFahrenheitToKelvin(float fahrenheit, float subtraction, float kelvin)
{
    printf("Enter a temp in fahrenheit: ");
    scanf("%f", &fahrenheit);
    subtraction = fahrenheit - 32;
    kelvin = (subtraction * 5) / 9 + 273.15;
    printf("%.2fF is same as %.2fK", fahrenheit, kelvin);
}
