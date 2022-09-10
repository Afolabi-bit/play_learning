#include <stdio.h>

/**
 * main - Calculate the volume of a sphere
 * Return: Zero
 */
int main(void)
{
	float radius, pi, vol;

	pi = 3.142;
	printf("Radius = \n");
	scanf("%f", &radius);
	vol = ((4 * pi * radius * radius *  radius) / 3);
	printf("Volume of sphere = %0.1f\n", vol);
	
	return (0);
}
