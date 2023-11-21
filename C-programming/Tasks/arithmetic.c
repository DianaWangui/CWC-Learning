#include <stdio.h>
/**
 * main - A function that does some basic arithmetic operations
 * @a: first variable
 * @b: second variable
 * Return: 0 always
 */
int main(void)
{
	int a = 30;
	int b = 10;
	int sum, sub, mul, div, mod;

	/* Addition */
	sum = a + b;
	printf("Addition = %d\n", sum);

	/* Subtraction */
	sub = a - b;
	printf("Subtraction = %d\n", sub);

	/* Multiplication */
	mul = a * b;
	printf("Multiplication = %d\n", mul);

	/* Division */
	div = a / b;
	printf("Division = %d\n", div);

	/* Modulus, returns the remainder after diving 2 numbers */
	mod = a % b;
	printf("Remainder = %d\n", mod);

	return (0);
}
