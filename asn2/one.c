#include <stdio.h>


int main(void)
{
    int cont = 0;

    while (cont == 0)
        cont = whatDo();
    return 0;
}

#define KILO_POUND 1
#define LIT_GAL 2
#define CENT_INCH 3
#define CEL_FAHR 4
#define QUIT 5


int whatDo()
{
    printf("What would you like to do? \n\n Input: \n 1 for conversion between Kilogram and Pounds \n 2 for conversion between Litre and Gallon (liquid gallon or US gallon) \n 3 for conversion between Centimetre and Inch \n 4 for conversion between Celsius and Fahrenheit \n 5 to quit \n Enter selection: ");
    int i;

    char n; //Used to clear input

    scanf("%d", &i);

    scanf("%c", &n);

    switch (i)
    {
        case QUIT:
            return 1;
        case KILO_POUND:
            kiloPound();
            break;
        case LIT_GAL:
            litGal();
            break;
        case CENT_INCH:
            centInch();
            break;
        case CEL_FAHR:
            celFahr();
            break;
        default:
            printf("Invalid selection. Try again.");
    }
    return 0;
}


float getConv() 
{ 
    printf("What would you like converted: "); 
    float num; 
    scanf("%f", &num); 
    return num; 
}



int kiloPound() 
{ 
    printf("What would you like to do? \n\n Input: \n K for conversion from Kilogram to Pound \n P for conversion from Pound to Kilogram \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice); 
    switch (choice) 
    { 
        case 'K': 
            kiloToPound(); 
            break; 
        case 'P': 
            poundToKilo(); 
            break; 
        default: 
            printf("Invalid input, try again \n"); 
            kiloPound();
    } 
    return 0; 
} 


#define MASS_SCALE_FACTOR 2.20462

int kiloToPound()
{
    float kilograms = getConv();
    printf("Pound equivalent: %.2f\n", kilograms * MASS_SCALE_FACTOR);
    return 0; 
}

int poundToKilo()
{
    float pounds = getConv();
    printf("Kilogram equivalent: %.2f\n", pounds / MASS_SCALE_FACTOR);
    return 0; 
}


int litGal() 
{ 
    printf("What would you like to do? \n\n Input: \n L for conversion from Litre to gallon \n G for conversion from gallon to Litre \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice); 
    switch (choice) 
    { 
        case 'L': 
            litToGal(); 
            break; 
        case 'G': 
            galToLit(); 
            break; 
        default: 
            printf("Invalid input, try again \n"); 
            litGal();
    } 
    return 0; 
} 



#define VOLUME_SCALE_FACTOR 3.78541

int litToGal()
{
    float liters = getConv();
    printf("Gallon equivalent: %.2f\n", liters * VOLUME_SCALE_FACTOR);
    return 0; 
}

int galToLit()
{
    float gallons = getConv();
    printf("Liter equivalent: %.2f\n", gallons / VOLUME_SCALE_FACTOR); 
    return 0; 
} 

int centInch() 
{ 
    printf("What would you like to do? \n\n Input: \n C for conversion from Centimetre to Inch \n I for conversion from Inch to Centimetre \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice); 
    switch (choice) 
    { 
        case 'C': 
            centToInch(); 
            break; 
        case 'I': 
            inchToCent(); 
            break; 
        default: 
            printf("Invalid input, try again \n"); 
            centInch();
    } 
    return 0; 
} 


#define CENT_SCALE_FACTOR 0.393700787 

int centToInch()
{
    float centimetre = getConv();
    printf("Inch equivalent: %.2f\n", centimetre * CENT_SCALE_FACTOR); 
    return 0; 
} 


#define INCH_SCALE_FACTOR 2.54 

int inchToCent()
{
    float inches = getConv();
    printf("Centimetre equivalent: %.2f\n", inches * INCH_SCALE_FACTOR); 
    return 0; 
} 

int celFahr() 
{ 
    printf("What would you like to do? \n\n Input: \n C for conversion from Celsius to Fahrenheit \n F for conversion from Fahrenheit to Celsius \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice); 
    
    switch (choice) 
    { 
        case 'C': 
            celToFahr(); 
            break; 
        case 'F': 
            fahrToCel(); 
            break; 
        default: 
            printf("Invalid input, try again \n"); 
            celFahr();
    } 
    return 0; 
} 

#define FREEZING_PT 32.0f 
#define TEMP_SCALE_FACTOR (5.0f / 9.0f) 

int celToFahr()
{
    float celsius = getConv();
    printf("Fahrenheit equivalent: %.1f\n", (celsius / TEMP_SCALE_FACTOR) + FREEZING_PT); 
    return 0; 
} 

int fahrToCel()
{
    float fahrenheit = getConv();
     printf("Celsius equivalent: %.1f\n", (fahrenheit - FREEZING_PT) * TEMP_SCALE_FACTOR); 
     return 0; 
} 
