#include <stdio.h>
#include <string.h>

/* Driver program to test above functions */

int main()
{
	char str[100];
	
	int length = 0;
	
	printf("Enter a string\n");
	gets(str);

	length = strlen(str);
	
	printf("Given string is\n");
	puts(str);

	printf("All permutations of the string will be\n");
	permute(str, 0, length - 1);

	return 0;
}


/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
	char temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}


/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
}

