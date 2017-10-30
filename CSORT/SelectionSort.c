#include <stdio.h>

#define NO_OF_ELEMS 10

void selection_sort(int[], const int);
void print_array(const int[], const int);

int main()
{
	int array[NO_OF_ELEMS] = {2, 6, 4, 3, 1, 7 , 8, 9, 10, 5};
	
	printf("\n Array before selection sort: ");
	print_array(array, NO_OF_ELEMS);
	
	selection_sort(array, NO_OF_ELEMS);
	
	printf("\n Array after selection sort: ");
	print_array(array, NO_OF_ELEMS);
	
	return 0;
}

void selection_sort(int array[], const int length)
{
	for(int i = 0; i < length - 1; i++)
	{
		// assume the minimum element is the current one
		int min = i;
		
		// check that it is
		for(int j = i + 1; j < length; j++)
		{
			if(array[j] < array[min]) min = j;
		}
		
		// if it wasnt make a swap with the real minimum
		if(array[min] != array[i])
		{
			int temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
		
		// print steps
		printf("\n Step %d: ", i + 1);
		print_array(array, length);
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
