#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int q;
srand(time(0));
q = rand() - RAND_MAX / 2;
/* your code goes there */
if (q > 0)
{
printf("%d is positive\n", q);
}
if (q < 0)
{
printf("%d is negative\n", q);
}
if (q == 0)
{
printf("%d is zero\n", q);
}
return (0);
}
