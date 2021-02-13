#include <stdio.h>

int main convertKelvinToCelcius(float celcius, float kelvin)
{
    printf("Enter a temp in kelvin: ");
    scanf("%f", &kelvin);
    celcius = (kelvin - 273.15);
    printf("%.2fK is same as %.2fC", kelvin, celcius);
    return 0;
}