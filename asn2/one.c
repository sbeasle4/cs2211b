/* Assignment 2
 * part ONE
 * Purpose: A C program that performs some simple conversions
 * Author: Steve Beasley
 *                              */
 
 

#include <stdio.h>

// main will call whatDo() for as long as the user wants to continue (doesn't input exit/5 at the main menu)

int main(void)
{
    int cont = 0;

    while (cont == 0)
        cont = whatDo();
    return 0;
}

//Macros for the switch statement in whatDo

#define KILO_POUND 1
#define LIT_GAL 2
#define CENT_INCH 3
#define CEL_FAHR 4
#define QUIT 5

// whatDo is our main menu where the user tells us what he wants to do
int whatDo()
{
    printf("What would you like to do? \n\n Input: \n 1 for conversion between Kilogram and Pounds \n 2 for conversion between Litre and Gallon (liquid gallon or US gallon) \n 3 for conversion between Centimetre and Inch \n 4 for conversion between Celsius and Fahrenheit \n 5 to quit \n Enter selection: ");
    int i;

    char n;          //Used to clear input

    scanf("%d", &i); // Reads the user input

    scanf("%c", &n); //collects the end of line character so it doesn't mess up further scanf calls

    switch (i)       //Figures out what the user wants to do and then does it.
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
        default:   //If the user does not put in 1-5 as their input the program will print this statement then go back to the main menu
            printf("Invalid selection. Try again.");
    }
    return 0;
}

//getConv asks the number that the user wants converted and then returns that number.

float getConv() 
{ 
    printf("What would you like converted: "); 
    float num; 
    scanf("%f", &num); 
    return num; 
}


//kiloPound asks which way the user wants to convert and then does it, printing the results to the screen and then returns to the main menu.
int kiloPound() 
{ 
    printf("What would you like to do? \n\n Input: \n K for conversion from Kilogram to Pound \n P for conversion from Pound to Kilogram \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice);   //get the user's input 
    switch (choice)         //checks what the user wants to do then does it
    { 
        case 'K': 
            kiloToPound(); 
            break; 
        case 'P': 
            poundToKilo(); 
            break; 
        default:            //If the user inputs an incorrect value the program will print an error statement and then ask again.
            printf("Invalid input, try again \n"); 
            kiloPound();
    } 
    return 0; 
} 


//kiloToPound and poundToKilo call getConv and then convert the returned value accordingly and prints the results neatly to the screen.

#define MASS_SCALE_FACTOR 2.20462 //Scale factor for conversion of Mass

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

//kitGal  asks which way the user wants to convert and then does it, printing the results to the screen and then returns to the main menu.
int litGal() 
{ 
    printf("What would you like to do? \n\n Input: \n L for conversion from Litre to gallon \n G for conversion from gallon to Litre \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice); //get the user's input
    switch (choice)       //checks what the user wants and then does it
    { 
        case 'L': 
            litToGal(); 
            break; 
        case 'G': 
            galToLit(); 
            break; 
        default:          //If the user inputs an incorrect value the program will print an error statement and then ask again.
            printf("Invalid input, try again \n"); 
            litGal();
    } 
    return 0; 
} 


//litToGal and galToLit call getConv and then convert the returned value accordingly and prints the results neatly to the screen.


#define VOLUME_SCALE_FACTOR 3.78541 //Scale factor for conversion of Volume

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


//centInch asks which way the user wants to convert and then does it, printing the results to the screen and then returns to the main menu.

int centInch() 
{ 
    printf("What would you like to do? \n\n Input: \n C for conversion from Centimetre to Inch \n I for conversion from Inch to Centimetre \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice);    //get the user's input
    switch (choice)          //checks what the user wants to do then does it
    { 
        case 'C': 
            centToInch(); 
            break; 
        case 'I': 
            inchToCent(); 
            break; 
        default:             ////If the user inputs an incorrect value the program will print an error statement and then ask again.
            printf("Invalid input, try again \n"); 
            centInch();
    } 
    return 0; 
} 

//centToInch and inchToCent call getConv and then convert the returned value accordingly and prints the results neatly to the screen.


#define CENT_SCALE_FACTOR 0.393700787 //Scale factor to convert centimeter to inches

int centToInch()
{
    float centimetre = getConv();
    printf("Inch equivalent: %.2f\n", centimetre * CENT_SCALE_FACTOR); 
    return 0; 
} 


#define INCH_SCALE_FACTOR 2.54 //Scale factor to convert inch to centimeter

int inchToCent()
{
    float inches = getConv();
    printf("Centimetre equivalent: %.2f\n", inches * INCH_SCALE_FACTOR); 
    return 0; 
} 


//celFahr asks which way the user wants to convert and then does it, printing the results to the screen and then returns to the main menu.


int celFahr() 
{ 
    printf("What would you like to do? \n\n Input: \n C for conversion from Celsius to Fahrenheit \n F for conversion from Fahrenheit to Celsius \n Enter selection: "); 
    char choice; 
    scanf("%c", &choice);    //get the user's input 
    
    switch (choice)          //checks what the user wants to do then does it
    { 
        case 'C': 
            celToFahr(); 
            break; 
        case 'F': 
            fahrToCel(); 
            break; 
        default:            //If the user inputs an incorrect value the program will print an error statement and then ask again.
            printf("Invalid input, try again \n"); 
            celFahr();
    } 
    return 0; 
} 

//celToFahr and fahrToCel call getConv and then convert the returned value accordingly and prints the results neatly to the screen.
//Lecture notes Chapter 2: C Fundamentals slide 49 was used to help write this section

#define FREEZING_PT 32.0f               //Freezing point (in fahrenheit) used in the conversion of temperature
#define TEMP_SCALE_FACTOR (5.0f / 9.0f) //Scale factor used in the conversion of temperature

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

