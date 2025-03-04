
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int val);

int main(void) {
	int size = 0;
	printf("Enter array size: ");
	scanf("%d", &size);

	int *a = malloc(size * sizeof(int));

	printf("Enter array values (must be in ascending order): ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	int val = -99;
	printf("Enter value to search for: ");
	scanf("%d", &val);

	int result = binarySearch(a, size, val);
	if (result != -1) {
		printf("Found at index %d\n", result);
	} else {
		printf("Did not find value %d\n", val);
	}

	free(a);
}

// Returns the index of the given value in the array if it exists,
// or -1 otherwise
int binarySearch(int arr[], int size, int val) {
	int lo = 0;
	int hi = size - 1;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (arr[mid] == val) {
			return mid;
		} else if (val < arr[mid]) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}

	return -1;
}
