#include <stdio.h>
/**
 * main- A main function that will print out some values assigned to
 * some of its local varibale
 *
 * using scanf to take input from user and then printing out the data
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
