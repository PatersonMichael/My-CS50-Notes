#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");
    // int sum = x + y;

    float dividend = x / y;

    printf("%.50f\n", dividend);
}