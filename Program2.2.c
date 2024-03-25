#include <stdio.h>

main(int argc, char *argv[], char *envp[])
{

	int i;
	
	printf("THE NUMBER OF COMMAND LINE ARGUMENTS ARE : %d\n\n", argc);

	printf("LIST OF COMMAND LINE ARGUMENTS :\n");
	
	for(i=0; i<argc; i++)
		printf("argument %d: %s\n", i, argv[i]);
		
	printf("\n\n");
	
	printf("THE ENVIRONMENT VARIABLES PASSED TO MAIN ARE :\n");
	
	for(i=0; envp[i]; i++)
		printf("%s\n", envp[i]);
}


