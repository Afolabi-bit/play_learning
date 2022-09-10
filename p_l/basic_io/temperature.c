#include <stdio.h>

/**
 * main - converts celsius to fahrenheit
 * Return: Zero
 */
int main(void)
{
	double c, f;

	printf("Enter Celsius temperature: \n");
	scanf("%lf", &c);
	f = ((c * 9) / 5) + 32;
	printf("Your Fahrenheit temperature is %0.2f\n", f);
	
	return (0);
}

