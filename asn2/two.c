/* Asignment 2
 * part TWO
 * Purpose: C program that calculates an exponential number using recursion
 * Author: Steve Beasley */

#include <stdio.h>

float exp_calculator(float x, int a);

// The main function will ask for the base and the exponent and then 
// call our exp_calculator function to find the sum. Then will neatly
// print the sum to the screen.

int main()
{
    float x;
    int a;

    printf("What is the base? : ");
    scanf("%f", &x);                        //get the base
    printf("What is the exponent? : ");
    scanf("%d", &a);                        //get the exponent

    float sum;
    sum = exp_calculator(x,a);              //calculate the sum

    printf("Result: %.2f\n", sum);          //print results

    return 0;
}

// the exp_calculator takes a float base and an int exponent and then returns the value of the number.
float exp_calculator(float x, int a)
{
    if (a==0)
        return 1;
    else if (a==1)
        return x;
    else
        return exp_calculator(x,a-1)*x;
}
