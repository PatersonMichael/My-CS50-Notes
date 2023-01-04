#include <stdio.h>

void meow(int n); // need to declare a prototype.

int main(void)
{
    meow(5);
}

void meow(int n) // defining that prototype as a function.
{
    for (int i = 0; i < n; i++) 
    {
        printf("meow\n");
    }
}