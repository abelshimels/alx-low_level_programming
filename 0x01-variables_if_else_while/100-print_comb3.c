#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int chala;
	int d = 0;

	while (d < 10)
	{
		chala = 0;
		while (chala < 10)
		{
			if (d != chala && d < chala)
			{
				putchar('0' + d);
				putchar('0' + chala);

				if (chala + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			chala++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
