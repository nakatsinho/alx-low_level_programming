#include "main.h"
#include <stdio.h>

/**
 * main_0 - check the code reset_to_98.
 *
 * Return: Always 0.
 */
void main_1(void)
{
int *a, *b, c;
c = 90;
a = &c;
b = &c;
*a = 14;
*b = 31;
swap_int(a, b);
printf("a : %d, b : %d.", *a, *b);
}


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
main_1();
printf("\n");
return (0);
}
