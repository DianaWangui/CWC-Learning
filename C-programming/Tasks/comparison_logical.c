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

	printf("\nEnter the age of the second person: ");
	scanf("%d", &age_person2);

	printf("\nEnter the age of the third person: ");
	scanf("%d", &age_person3);

	/**
	 * Comparing the three ages using logical and (&&) 
	 * operator to decide the oldest
	 * or using logical or(||) operator to check if there 
	 * is any more than two ages which are equal
	 */
	if (age_person1 > age_person2 && age_person1 > age_person3)
	{
		printf("\nPerson 1 is the oldest.");
	}
	else if (age_person2 > age_person1 && age_person2 > age_person3)
	{
		printf("\nPerson 2 is the oldest.");
	}
	else if (age_person3 > age_person1 && age_person3 > age_person2)
	{
		printf("\nPerson 3 is the oldest.");
	}
	else if (age_person1 == age_person2 || age_person2 == age_person3 || age_person1 == age_person3)
	{
		printf("\nAtleast two persons share the same age.");
	}
	else
	{
		printf("\nInvalid input.");
	}
	printf("\n");

	return (0);
}
