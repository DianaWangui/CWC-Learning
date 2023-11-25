#include <stdio.h>
int main(void)
{
	int age_person1, age_person2, age_person3;

	printf("A program that simulates decision making using comparison and logical operators\n");

	printf("Enter the age of the first person: ");
	scanf("%d", &age_person1);

	printf("\nEnter the age of the second person: ");
	scanf("%d", &age_person2);

	printf("\nEnter the age of the third person: ");
	scanf("%d", &age_person3);

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
