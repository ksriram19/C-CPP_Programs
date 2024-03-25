
#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	int i=0, length;
		
	printf("Enter a string:\n");
	gets(str);
	
	length = strlen(str);

	printf("\nUsing strlen() function, length = %d\n", length);

	while ( str[i] != '\0' )
		i++;
	
	length = i;
	
	printf("\nWithout using strlen() function, length = %d\n", length);

}


