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
	char *name = "Diana Wangui";
	char *residence = "Mombasa Kenya";
	int age = 29;
	/* Tried using (5'7)inches but oops I dont know how (Will research) */
	float height = 5.7;
	char gender = 'F';
	/* Printing each variable with its own format specifier */
	printf("Student Name: %s\n", name);
	printf("Residence: %s\n", residence);
	printf("Age: %d years\n", age);
	printf("Height: %.1f inches\n", height);
	printf("Gender: %c\n", gender);

	return (0);
}
