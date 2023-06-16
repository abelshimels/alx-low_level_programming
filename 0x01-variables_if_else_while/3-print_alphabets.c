#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char Chala = 'a';

	while (Chala <= 'z')
	{
		putchar(Chala);
		Chala++;
	}

	char chala = 'A';

	while (chala <= 'Z')
	{
		putchar(chala);
		chala++;
	}

	putchar('\n');
	return (0);
}
