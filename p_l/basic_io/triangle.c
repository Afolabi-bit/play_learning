#include <stdio.h>

/**
 * main - Finds the third angle of a triangle
 * Return: zero
 */
int main(void)
{

	float ang1, ang2, ang3, t;

	t = 180;

	printf("Input two angles of triangle: \n");
	scanf("%f", &ang1);
	scanf("%f", &ang2);
	ang3 = t - (ang1 + ang2);
	if (ang3 < 1)
	{
		printf("Invalid values given\n");
	} else
	{
		printf("The third angle is: %0.1f\n", ang3);
	}

	return (0);
}


