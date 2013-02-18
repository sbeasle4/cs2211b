#include <stdio.h>

float exp_calculator(float x, int a);

int main()
{
    float x;
    int a;

    printf("What is the base? : ");
    scanf("%f", &x);
    printf("What is the exponent? : ");
    scanf("%d", &a);

    float sum;
    sum = exp_calculator(x,a);

    printf("Result: %.2f\n", sum);

    return 0;
}

float exp_calculator(float x, int a)
{
    if (a==0)
        return 1;
    else if (a==1)
        return x;
    else
        return exp_calculator(x,a-1)*x;
}
