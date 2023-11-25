#include <stdio.h>
/**
 * main - a main function that used logical operators
 * to make the decision of the person who is the oldest
 * or checking if ages are equal
 * Return: 0 on success
 */

int main(void)
{
	/* declaring the persons ages that will be used to store their ages */
	int age_person1, age_person2, age_person3;

	printf("A program that simulates decision making using comparison and logical operators\n");

	/*Taking each persons age from the user*/
	printf("Enter the age of the first person: ");
	scanf("%d", &age_person1);

	printf("Enter the age of the second person: ");
	scanf("%d", &age_person2);

	printf("Enter the age of the third person: ");
	scanf("%d", &age_person3);

	/**
	 * Comparing the three ages using logical and (&&) 
	 * operator to decide the oldest
	 * or using logical or(||) operator to check if there 
	 * is any more than two ages which are equal
	 */
	if (age_person1 > age_person2 && age_person1 > age_person3)
	{
		printf("Person 1 is the oldest.\n");
	}
	else if (age_person2 > age_person1 && age_person2 > age_person3)
	{
		printf("Person 2 is the oldest.\n");
	}
	else if (age_person3 > age_person1 && age_person3 > age_person2)
	{
		printf("Person 3 is the oldest.\n");
	}
	else
	{
		printf("There is a tie in ages\n");
	}
	if (age_person1 == age_person2 || age_person2 == age_person3 || age_person1 == age_person3)
	{
		printf("Atleast two persons share the same age.\n");
	}
	else
	{
		printf("No two people share same age\n");
	}
	printf("\n");

	return (0);
}
