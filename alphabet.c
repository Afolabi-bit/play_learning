#include <stdio.h>

/**
 * lowercase - prints the lowercase alphabet
 *
 * @letter: first letter of the alphabet
 *
 * Return: 0
 */
int lowercase(char letter)
{
	if (letter >= 'z')
	{
		putchar(letter);
		putchar('\n');
		return (0);
	}
	putchar(letter);
	letter++;
	return (lowercase(letter));
}

/**
 * uppercase - prints the uppercase alphabet
 *
 * @letter: first letter of the alphabet
 *
 * Return: 0
 */
int uppercase(char letter)
{
	if (letter >= 'Z')
	{
		putchar(letter);
		putchar('\n');
		return (0);
	}
	putchar(letter);
	letter++;
	return (uppercase(letter));
}

/**
 * main - calls the recursive alphabet
 * function depending on input
 *
 * Return: 0
 */
int main(void)
{
	char letter;
	
	printf("Enter (u / l) for Uppercase / Lowercase alphabet: ");
	scanf("%c", &letter);

	if (letter == 'u' || letter == 'U')
		uppercase('A');
	else if (letter == 'l' || letter == 'L')
		lowercase('a');
	else
		printf("Invalid case\n");
	return (0);
}

