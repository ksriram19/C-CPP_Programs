#include <stdio.h>
#include <conio.h>

main()
{

	unsigned long magic1;
	long unsigned magic2;
	unsigned long int magic3;
	unsigned int long magic4;
	long int unsigned magic6;
	long unsigned int magic5;
	int unsigned long magic7;
	int long unsigned magic8;
	
	printf("Memory required to store the variables.\n");
	printf("magic1 : %d Bytes\n",sizeof(magic1));
	printf("magic2 : %d Bytes\n",sizeof(magic2));
	printf("magic3 : %d Bytes\n",sizeof(magic3));
	printf("magic4 : %d Bytes\n",sizeof(magic4));
	printf("magic5 : %d Bytes\n",sizeof(magic5));
	printf("magic6 : %d Bytes\n",sizeof(magic6));
	printf("magic7 : %d Bytes\n",sizeof(magic7));
	printf("magic8 : %d Bytes\n",sizeof(magic8));
}

