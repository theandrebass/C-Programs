#include <stdio.h>

#define NO_OF_ELEMS 10

void insertion_sort(int[], const int);
void print_array(const int[], const int);

int main()
{
	int array[NO_OF_ELEMS] = {12, 87, 43, 21, 79, 102, 54, 94, 255, 99};
	
	printf("\n Array before insertion sort: ");
	print_array(array, NO_OF_ELEMS);
	
	insertion_sort(array, NO_OF_ELEMS);
	
	printf("\n Array after insertion sort: ");
	print_array(array, NO_OF_ELEMS);
	
	return 0;
}

void insertion_sort(int array[], const int length)
{
	for(int i = 1; i < length; i++)
	{
		// select value to be inserted
		int x = array[i];
		int j = i - 1;
		
		// find the position to insert value
		while(j >= 0 && array[j] > x)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		
		// insert the value
		array[j + 1] = x;
		
		printf("\n Step %d: ", i);
		print_array(array, NO_OF_ELEMS);
	}
}

void print_array(const int array[], const int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	putchar('\n');
}
