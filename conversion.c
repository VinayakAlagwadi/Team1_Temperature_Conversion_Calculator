#include<stdio.h>
int main() 
{
    float fah=0, cel=0, kel=0;
    int n;
    printf("enter 1 for conversion -- celcius to fahrenheit\n");
    printf("enter 2 for conversion -- fahrenheit to celcius\n");
    printf("enter 3 for conversion -- celcius to kelvin\n");
    printf("enter 4 for conversion -- kelvin to celcius\n");
	printf("enter 5 for conversion -- fahrenheit to kelvin\n");
	printf("enter 6 for conversion -- kelvin to fahrenheit \n");
	scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter temperature in celcius: ");
	    scanf("%f", &cel);
	    fah = (cel*9/5)+32;
	    printf("%.1fC is same as %.1fF", cel ,fah);
	    printf("\n");
        break;    

    case 2:
        printf("Enter a temp in fah: ");
	    scanf("%f", &fah);
	    cel = ((fah - 32)*5)/9;
	    printf("%.1fF is same as %.1fC", fah, cel);
	    printf("\n");
        break; 

    case 3:   
        printf("Enter a temp in celcius: ");
	    scanf("%f", &cel);
	    kel = (cel + 273.15);
	    printf("%.1fC is same as %.1fK", cel, kel);
        break;

	case 4:
        printf("Enter a temp in kelvin: ");
	    scanf("%f", &kel);
	    cel = (kel - 273.15);
	    printf("%.1fC is same as %.1fK", fah, cel);
        break;

    case 5:
        printf("Enter a temp in fahrenheit: ");
	    scanf("%f", &fah);
	    kel = ((fah - 32)*5)/9 +273.15;
        
	    printf("%.1fF is same as %.1fK", fah, kel);
        break;

    case 6:
        printf("Enter a temp in kelvin: ");
	    scanf("%f", &kel);
	    fah = ((kel - 273.15)*9)/5+32;
	    printf("%.1fC is same as %.1fK", kel, fah);
        break;

    default:
        printf("invalid entry");
        break;
    }
    return 0;
}