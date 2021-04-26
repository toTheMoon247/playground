#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int absolute(int num) {
	return (num < 0) ? 0 - num : num;
}

float expo(int base, int power) {
	if (expo == 0)
		return 1;

	float result = 1;
	int i = 0;
	while (i < absolute(power)) {
		result = result * base;
		i++;
	}

	return power > 0 ? result : 1 / result;
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

int* PrimitiveReversedArray(int arr[], int rev[], int size) {
	int i;
	for (i = 0; i < size; i++)
		rev[size - 1 - i] = arr[i];
	return rev;
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

int* mergeArrays(int first[], int second[], int firstSize, int secondSize, int merged[]) {

	int i = 0, j = 0, k = 0;

	while (i < firstSize && j < secondSize){
		merged[k++] = first[i] < second[j] ? first[i++] : second[j++];
	}

	while (i < firstSize)
		merged[k++] = first[i++];

	while (j < secondSize)
		merged[k++] = second[j++];

	return merged;
}

int* findFirstKthPrimes(int primes[], int size) {
	if (size == 0)
		return primes;

	int k = 0, i = 2;
	while (k < size)
		isPrime(i) ? primes[k++] = i++ : i++;

	return primes;
}

/************************************/
/**			 Swap Pointers  	   **/
/************************************/


void swapPointersDebugged(int** first, int** second) {
	int* temp = *first;
	printf("first = %p, *first = %p, **first = %d\n", first, *first, **first);
	press();

	printf("second = %p, *second = %p, **second = %d\n", second, *second, **second);
	press();

	printf("temp = %p, *temp = %d\n", temp, *temp);
	press();

	*first = *second;
	printf("*first = %p, *second = %p, *temp = %p\n", first, second, temp);
	press();

	*second = temp;
	printf("*first = %p, *second = %p, *temp = %p\n", first, second, temp);
	press();

	return;	
}


void swapPointers(int** first, int** second) {
	int* temp = *first;
	*first = *second;
	*second = temp;
	return;	
}

void swapValues(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
	return;
}

/************************************/
/**			 STRINGS			   **/
/************************************/	 

void printString(char* text) {
	while (*text != '\0') {
		printf("%c", *text);
		text++;
	}
	printf("\n");
	return;
}


char* reverseWord(char* str, int size) {

	char* reversed = malloc (sizeof (char) * size);
	if (!reversed)
		return NULL;

	// Place the null termination
	reversed[size - 1] = '\0';

	int i = 0;
	while (*str != '\0') {
		reversed[size - 2 - i] = *str;
		i++;
		str++;
	}
	return reversed;
}

int length(char* str) {
	if (str == "")
		return 0;

	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}


	return size;
}


char* shiftLeft(char text[], int shift, char shifted[]) {

	int j = 0;
	int i = shift;
	while (text[i] != '\0') {
		shifted[j++] = text[i++];
	}

	i = 0;
	while (i < shift) {
		shifted[j++] = text[i++];
	}

	shifted[j] = '\0';
	return shifted;
}

/************************************/
/**			 SORTS  			   **/
/************************************/	 


void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
	return;
}


void bubble(int* arr, int size) {
	int temp;
	int i;
	for (i = 1; i < size; i++) {
		if (*(arr + i) < *(arr + i -1)) {
			swap(arr + i, arr + i -1);
		}
	}

	return;
}


void bubbleSort(int* arr, int size) {

	int i;
	for (i = 0; i < size; i++) {
		bubble(arr, size - i);
	}

	return;
}

int findTheKthElement(int* arr, int size, int k) {
	int temp[size];
	int i;
	for (i = 0; i < size; i++) 
		temp[i] = *(arr + i);

	bubbleSort(temp, size);
	return temp[k - 1];	
}

int* fibonacciKFirstElements(int fibo[], int size) {
	
	if (size == 1) {
		fibo[0] = 1;
		return fibo;
	}

	if (size == 2) {
		fibo[0] = 1;
		fibo[1] = 1;
		return fibo;
	}

	int i;
	fibo[0] = 1;
	fibo[1] = 1;
	for (i = 2; i < size; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	return fibo;
}