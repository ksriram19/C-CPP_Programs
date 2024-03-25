#include <stdio.h>
#include <conio.h>

main(void)
{

	printf("Handle or fd entry in FILE structure for stdin  : %d\n", stdin->fd);
	printf("Handle or fd entry in FILE structure for stdout : %d\n", stdout->fd);
	printf("Handle or fd entry in FILE structure for stderr : %d\n", stderr->fd);
/*	  printf("Handle or fd entry in FILE structure for stdaux : %d\n", stdaux->fd);
	printf("Handle or fd entry in FILE structure for stdprn : %d\n", stdprn->fd);
*/
}


