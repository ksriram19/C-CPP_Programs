#include <stdio.h>
#include <string.h>

main()
{
	char str[100], source[100], target[100];
	int i, j, tempchar, length, count = 0;

	printf("Enter a string\n");
	gets(str);
	printf("Given string is\n");
	puts(str);

	length = strlen(str);
	strcpy(source, str);
	
	puts(rotatestr(str));
	

}

char * rotatestr(char str[])
{
	char firstchar, source[100], target[100];
	
	int i=1, length=0;

	strcpy(source, str);	
	length = strlen(source);
	
	firstchar = str[0];
	
	while (source[i] != 0)
	{
		target[i-1] = source[i];
		i++;
	}
	target[i-1] = firstchar;
	target[i] = '\0';	 

	return target;	  
}


