
#include <stdio.h>
#include <string.h>
main()
{
	char name[10][20];
	char tempname[20];
	int i, j, n;
	
	printf("Enter the number of names in the list\n");
	scanf("%d", &n);

	printf("Enter the list of names\n");

	for(i=0; i<n; i++)
		gets(name[i]);

	printf("Entered list of names\n");

	for(i=0; i<n; i++)
		puts(name[i]);


	for(i=1; i<n; i++)
		for(j=0; j<n-i; j++)
			if(strcmp(name[j], name[j+1]) > 0)
			{
				strcpy(tempname, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], tempname);
			}	 
	printf("\nSorted Names");
	
	for(i=0; i<n; i++) 
		printf("\n%s", name[i]);

}

