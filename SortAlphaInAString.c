
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
	
	char str[100];
	int i, j, tempchar, length, count=0;
	
	printf("Enter a string\n");
	gets(str);

	printf("Given string is\n");
	puts(str);

	length = strlen(str);
	
	for(i=1; i<length; i++)
		for(j=0; j<length-i; j++)
			if (str[j] > str[j+1])
			{
				tempchar = str[j];
				str[j] = str[j+1];
				str[j+1] = tempchar;
			}
	
	printf("After sorting its alphabets, string will be\n%s", str);

}

