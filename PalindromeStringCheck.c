
#include <stdio.h>
#include <string.h>

main()
{
	char str[100], revstr[100];
	int i=0, length;
		
	printf("Enter a string:\n");
	gets(str);
	
	strcpy(revstr, str);
	strrev(revstr);

	if ( strcmp(str, revstr) == 0 )	   
		printf("\n%s is a palindrome", strupr(str));
	else
		printf("\n%s is not a palindrome", strupr(str));

}


