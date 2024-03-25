#include <stdio.h>

int main()
{
	int r1, i1, r2, i2, *r3, *i3, *r4, *i4, *r5, *i5;
	void complexsum(int, int, int, int, int *, int *);
	void complexdiff(int, int, int, int, int *, int *);
	void complexproduct(int, int, int, int, int *, int *);

	printf("Enter the first complex number R1+iI1\n");
	scanf("%d %d", &r1, &i1);

	printf("Enter the second complex number R2+iI2\n");
	scanf("%d %d", &r2, &i2);
	complexsum(r1, i1, r2, i2, r3, i3);

	printf("The sum of complex numbers (R1+iI1) + (R2+iI2) is = (%d)+i(%d)\n", *r3, *i3);
	complexdiff(r1, i1, r2, i2, r4, i4);

	printf("The difference of complex numbers (R1+iI1) - (R2+iI2) is = (%d)+i(%d)\n", *r4, *i4);
	complexproduct(r1, i1, r2, i2, r5, i5);

	printf("The product of complex numbers (R1+iI1) * (R2+iI2) is = (%d)+i(%d)\n", *r5, *i5);

	return 0;

}

void complexsum(int a, int b, int x, int y, int *p, int *q)
{
	*p = a + x;
	*q = b + y;
}

void complexdiff(int a, int b, int x, int y, int *p, int *q)
{
	*p = a - x;
	*q = b - y;
}

void complexproduct(int a, int b, int x, int y, int *p, int *q)
{
	*p = a * x - b * y;
	*q = a * y + b * x;
}

