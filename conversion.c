#include <stdio.h>

void convertCelciusToFahrenheit(float celcius, float multiplication, float fahrenheit)
{
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);
    multiplication = (celcius * 9 / 5);
    fahrenheit = (multiplication) + 32;
    printf("%.2fC is same as %.2fF", celcius, fahrenheit);
    printf("\n");
}

void convertFahrenheitToCelcius(float fahrenheit, float celcius, float subtraction)
{
    printf("Enter a temp in fah: ");
    scanf("%f", &fahrenheit);
    subtraction = (fahrenheit - 32);
    celcius = (subtraction * 5) / 9;
    printf("%.2fF is same as %.2fC", fahrenheit, celcius);
    printf("\n");
}

void convertCelciusToKelvin(float celcius, float kelvin, float addition)
{
    printf("Enter a temp in celcius: ");
    scanf("%f", &celcius);
    addition = (celcius + 273.15);
    kelvin = addition;
    printf("%.2fC is same as %.2fK", celcius, kelvin);
}

void convertKelvinToCelcius(float celcius, float kelvin)
{
    printf("Enter a temp in kelvin: ");
    scanf("%f", &kelvin);
    celcius = (kelvin - 273.15);
    printf("%.2fK is same as %.2fC", kelvin, celcius);
}
void convertFahrenheitToKelvin(float fahrenheit, float subtraction, float kelvin)
{
    printf("Enter a temp in fahrenheit: ");
    scanf("%f", &fahrenheit);
    subtraction = fahrenheit - 32;
    kelvin = (subtraction * 5) / 9 + 273.15;
    printf("%.2fF is same as %.2fK", fahrenheit, kelvin);
}

void convertKelvinTofahrenheit(float kelvin, float fahrenheit)
{
    printf("Enter a temp in kelvin: ");
    scanf("%f", &kelvin);
    fahrenheit = ((kelvin - 273.15) * 9) / 5 + 32;
    printf("%.2fK is same as %.2fF", kelvin, fahrenheit);
}

int main()
{
    //various temrature format
    float fah = 0, cel = 0, kel = 0;
    //various arthematic operation
    float mul = 0, sub = 0, add = 0;
    int n;
    //Enter a number from 1-6 to get various conversions
    printf("enter 1 for conversion -- celcius to fahrenheit\n");
    printf("enter 2 for conversion -- fahrenheit to celcius\n");
    printf("enter 3 for conversion -- celcius to kelvin\n");
    printf("enter 4 for conversion -- kelvin to celcius\n");
    printf("enter 5 for conversion -- fahrenheit to kelvin\n");
    printf("enter 6 for conversion -- kelvin to fahrenheit \n");
    scanf("%d", &n);

    //cases for calculating temperature convertions
    switch (n)
    {

        //conversion of celcius to fahrenheit
    case 1:
        //call the convertCelciusToFahrenheit
        convertCelciusToFahrenheit(cel, mul, fah);
        break;

        // conversion of fahrenheit to celcius
    case 2:
    //call a funtion to convert Farenheit to celcius
        convertFahrenheitToCelcius(fah, cel, sub);
        break;

        // conversion of celcius to kelvin
    case 3:
        convertCelciusToKelvin(cel, kel, add);
        break;

    // conversion of kelvin to celcius
    case 4:
        convertKelvinToCelcius(cel, kel);
        break;

        //conversion of fahrenheit to kelvin
    case 5:
        convertFahrenheitToKelvin(fah, sub, kel);
        break;

        // conversion of kelvin to fahrenheit
    case 6:
        convertKelvinTofahrenheit(kel, fah);
        break;

    default:
        printf("invalid entry");
        break;
    }
    return 0;
}