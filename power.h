#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float expo(int base, float expo) {
	if (expo == 0)
		return 1;

	float power = 1;
	int i = 0;
	while (i < abs(expo)) {
		power = power * base;
		i++;
	}

	return expo > 0 ? power : 1 / power;
}


void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++)
      printf("%d ", arr[i]);
  	printf("\n");

  	return;
}

void press() {
	printf("Press ENTER key to Continue\n");  
	getchar();

	return;    
}

void reverseArray(int* arr, int size) {
    
    int temp;
    int *start;
    int *end;

    start = arr;
    end = arr + size - 1 ;

    while (start < end)
    {
        temp = *start;  
        *start = *end;
        *end = temp;
        start++;
        end--;
    } 

    return; 
}


void shiftArray(int* arr, int size, int shift) {
	// reverse array [0...shift]
	reverseArray(arr, shift);
	// reverse array [shift...0]
	reverseArray(arr + shift, size - shift);
	// reverse array
	reverseArray(arr, size);

	return;
}


int maxNumInArray(int* arr, int size) {
	int i;
	int max = *arr;

	for (i = 0; i < size; i++ ) {
		if (*(arr + i) > max)
			max = *arr + i;
	} 

	return max;
}

int isPrime(int num) {
	if (num <= 0 ) {
		printf("ERROR: findPrimeNumbers should get value greater than 0\n");
		return -1;
	}
	
	int root = (int)sqrt(num);
	int i;
	for (i = 2; i <= root; i++) {
		if (num % i == 0)
			return 0;
	}

	return 1;
}

void printPrimes(int num) {
	printf("Prime numbers up to %d are \n", num);
	for (int i = 2; i < num; i++) {
		if (isPrime(i)) 
			printf("%d ", i);
	}
	printf("\n");

	return;
}


int min(int first, int second) {
	return first < second ? first : second;
}

int* mergeSortedArrays(int first[], int second[], int firstSize, int secondSize) {

	int* mergedSortedArrays = malloc (sizeof (int) * (firstSize + secondSize));
	if (!mergedSortedArrays)
		return  NULL;
	// static int mergedSortedArrays[10]; // change me

	int temp;
	// initialise pointers for each array
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < firstSize && j < secondSize) {
		temp = min(first[i], second[j]);
		first[i] < second[j] ? i++ : j++;
		mergedSortedArrays[k] = temp;
		k++;
	}

	if (i < firstSize) {
		for (temp = i; temp < firstSize; temp++)
			mergedSortedArrays[k] = first[temp];
			k++;
	}

	if (j < secondSize) {
		for (temp = j; temp < secondSize; temp++) {
			mergedSortedArrays[k] = second[temp];
			k++;
		}
	}

	return mergedSortedArrays;
}

void mergeArrays(int first[], int second[], int firstSize, int secondSize, int merged[]) {

	int i = 0, j = 0, k = 0;

	while (i < firstSize && j < secondSize)
		merged[k++] = firstSize < secondSize ? first[i++] : second[j++];

	while (i < firstSize)
		merged[k++] = first[i++];

	while (j < secondSize)
		merged[k++] = second[j++];

	return;


void swapPonters(int** first, int** second) {

	return
}