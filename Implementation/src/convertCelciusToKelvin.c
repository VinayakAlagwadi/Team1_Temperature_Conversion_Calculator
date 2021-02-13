#include <stdio.h>
int main convertCelciusToKelvin(float celcius, float kelvin, float addition)
{
    printf("Enter a temp in celcius: ");
    scanf("%f", &celcius);
    addition = (celcius + 273.15);
    kelvin = addition;
    printf("%.2fC is same as %.2fK", celcius, kelvin);
    return 0;
}