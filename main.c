#include "power.h"

int main()
{

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int first[4] = {1, 3, 5, 7}; 
	int second[6] = {2, 4, 9, 10, 11, 12};
	int merged[10];

	// int* merged = mergeSortedArrays(first, second, 4, 6);
	mergeArrays(first, second, 4, 6, merged);
	printf("Merged array is:\n");
	printArray(merged, 10);

	return 0;
}