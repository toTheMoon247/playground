#include "power.h"

int main()
{

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int unsorted[10] = {1, 7, 0, 9, 6, 10, 2, 8, 4, 5};
	char joedimaggio[12] = "joedimaggio";

	int* res;
	int primes[10];

	res = findFirstKthPrimes(primes, 10);
	printArray(res, 10);
	press();

	char* result;
	char shifted[12];
	result = shiftLeft(joedimaggio, 3, shifted);
	printf("shifted = %s \n", shifted);
	press();

	return 0;
}