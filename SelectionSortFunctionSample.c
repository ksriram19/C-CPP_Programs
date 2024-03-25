
#include <stdio.h>
main()
{

	int a[100];
	int i, num;
	
	void output(int *, int);
	void selection_sort(int *, int);
	
	printf("Enter the number of elements in the list\n");
	scanf("%d", &num);

	printf("Enter the array elements\n");

	for(i=0; i<num; i++)
		scanf("%d", &a[i]);
		
	printf("Unsorted array\n");
	output(a, num);

	selection_sort(a, num);
	
	printf("\nSorted array\n");
	output(a, num);	   

}

void output(int b[], int n)
{
	int i;
	
	for(i=0; i<n; i++) 
		printf("%d\t", b[i]);
	   
}

void selection_sort(int b[], int n)
{
	int i, j, min, pos;
	
	for(i=0; i<n-1; i++)
	{
		min = b[i];
		pos = i;
		
		for(j=i+1; j<n; j++)
			if (b[j] < min)
			{
				min = b[j];
				pos = j;
			}
		b[pos] = b[i];
		b[i] = min;
	}
}


