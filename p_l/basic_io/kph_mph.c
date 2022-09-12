#include <stdio.h>

/**
 * main - converts kph to mph
 * Return: Zero
 */
int main(void)
{
	int kph, mph;

	printf("Enter your speed value in kph\n");
	scanf("%d", &kph);
	mph = kph / 1.609344;
	printf("Your speed is %d mph\n", mph);
	printf("Drive safely!\n");

	return (0);
}
