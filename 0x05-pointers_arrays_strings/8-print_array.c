#include "main.h"
#include "stdio.h"

/**
 * print_array - Print array upto n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 *
 * Description - prints n elements of an array of integers
 */
void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0 ; n > i; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
}
printf("\n");
}
