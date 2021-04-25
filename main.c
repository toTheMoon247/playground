#include "power.h"

int main()
{

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int unsorted[10] = {1, 7, 0, 9, 6, 10, 2, 8, 4, 5};
	char joedimaggio[12] = "joedimaggio";

	int first[] = {1, 7, 13, 15};
	int second[] = {2, 3, 4, 55, 56, 57, 58};
	int merged[11];

	int* res;

	res = mergeArrays(first, second, 4, 7, merged);
	printArray(res, 11);

	return 0;
}