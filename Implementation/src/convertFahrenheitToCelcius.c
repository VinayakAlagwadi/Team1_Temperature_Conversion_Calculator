#include <stdio.h>
void convertFahrenheitToCelcius(float fahrenheit, float celcius, float subtraction)
{
    printf("Enter a temp in fah: ");
    scanf("%f", &fahrenheit);
    subtraction = (fahrenheit - 32);
    celcius = (subtraction * 5) / 9;
    printf("%.2fF is same as %.2fC", fahrenheit, celcius);
    printf("\n");
}