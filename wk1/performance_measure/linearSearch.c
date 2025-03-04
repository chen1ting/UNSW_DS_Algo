
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int val);

int main(void) {
	int size;
	printf("Enter array size: ");
	scanf("%d", &size);

	int *a = calloc(size, sizeof(int));

	printf("Enter array values: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	int val = 0;
	printf("Enter value to search for: ");
	scanf("%d", &val);

	int result = linearSearch(a, size, val);
	if (result != -1) {
		printf("Found at index %d\n", result);
	} else {
		printf("Did not find value %d\n", val);
	}

	free(a);
}

// Returns the index of the given value in the array if it exists,
// or -1 otherwise
int linearSearch(int arr[], int size, int val) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == val) {
			return i;
		}
	}
	return -1;
}

