#include "power.h"

int main()
{

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int ten = 10;
	int twenty = 20;
	int* first = &ten;
	int* second = &twenty;
	swapPointers(&first, &second);
	printf("after swap ten = %d, twenty = %d\n", ten, twenty);
	printf("after swap *first = %d, *second = %d\n", *first, *second);

	return 0;
}