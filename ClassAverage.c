#include <stdio.h>

main()
{

	int marks[100];
	int index, num;

	float average, sum; 

	printf("Enter the number of students in the class:\n");
	scanf("%d", &num);

	sum = 0;
	
	printf("Enter the marks of each student one by one:\n");
	
	for (index=0; index < num; index++)
	{
		scanf("%d", &marks[index]);
		
		sum = sum + marks[index];
	}
	
	average = sum / num;

	printf("\nClass Average = %.2f", average);
	
}

