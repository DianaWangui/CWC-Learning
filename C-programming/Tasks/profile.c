#include <stdio.h>
/**
 * main- A main function that will print out some values assigned to
 * some of its local varibale
 *
 * I have used char* to point to the first element of our string
 * A string is treated as an array of character so we assign
 * the pointer the address of the first element to our string
 * Return: 0 on success execution
 */
int main(void)
{
	/* The var (char* ) is a pointer to the first element of our string */
	char* Student_Name = "Diana Wangui";
	char* Residence = "Mombasa Kenya";
	int Age = 29;
	float Height = 5.7;
	char Gender = 'F';
	/* Printing each variable with its own format specifier */
	printf("Student Name = %s\n", Student_Name);
	printf("Residence = %s\n", Residence);
	printf("Age = %d years\n", Age);
	printf("Height = %.1f inches\n", Height);
	printf("Gender = %c\n", Gender);

	return (0);
}
