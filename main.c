#include "power.h"

int main()
{

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int unsorted[10] = {1, 7, 3, 9, 6, 10, 2, 8, 4, 5};
	char joedimaggio[12] = "joedimaggio";

	printArray(unsorted, 10);
	press();
	bubbleSort(unsorted, 10);
	printArray(unsorted, 10);
	
	return 0;
}