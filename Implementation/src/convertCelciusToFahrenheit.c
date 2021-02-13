#include <stdio.h>
#include "convertCelciusToFahrenheit.h"
//method to convert celcius to farenite
void convertCelciusToFahrenheit(float celcius, float multiplication, float fahrenheit)
{
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius); 
        multiplication = (celcius * 9 / 5);
        fahrenheit = (multiplication) + 32;
        printf("%.2fC is same as %.2fF", celcius, fahrenheit);
        printf("\n");
}