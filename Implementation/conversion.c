#include <stdio.h>
#include "inc/convertCelciusToFahrenheit.h"
#include "inc/convertFahrenheitToCelcius.h"
#include "inc/convertCelciusToKelvin.h"
#include "inc/convertKelvinToCelcius.h"
#include "inc/convertFahrenheitToKelvin.h"
#include "inc/convertKelvinTofahrenheit.h"

void convertCelciusToFahrenheit();
void convertCelciusToKelvin();
void convertFahrenheitToCelcius();
void convertFahrenheitToKelvin();
void convertKelvinToCelcius();
void convertKelvinTofahrenheit();

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