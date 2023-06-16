#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char chala = 'a';
	while (chala<='z')
	{
		putchar(chala);
		chala++;
	}
	char Chala='A';
	while(Chala<='z')
	{
		putchar(Chala);
		Chala++;
	}
	putchar('\n');
	return (0);
}
