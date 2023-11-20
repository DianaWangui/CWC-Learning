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
	/* Declaring the variable to store the user input read using printf */
	char name[30];
	char residence[30];
	int age;
	float height;
	char gender[7];
	/* Taking input from the user using scanf */
	printf("Student Name: ");
	scanf("%[^\n]%*c", name);

	printf("Residence: ");
	scanf(" %[^\n]%*c", residence);

	printf("Age: ");
	scanf("%d", &age);

	printf("Height: ");
	scanf("%f", &height);

	printf("Gender: ");
	scanf(" %s", gender);

	printf("\nName: %s\nResidence: %s\nAge: %d\nHeight: %.2f\nGender: %s\n", name, residence, age, height, gender);

	return (0);
}
