
#include <stdio.h>
extern int a = 5;
main()
{
	static int num = 100;
	
	function1(num);
	printf("num value initialized in main() : %d %d\n", num, a);
}

function1(int num)
{
	function2(num);
	num = num + 50;
	printf("num value initialized in function1() : %d %d\n", num, a);
}

function2(int num)
{
	printf("num value initialized in function2() : %d %d\n", num, a);
}


