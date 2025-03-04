
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int arr[], int size, int val);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "usage: %s <array size>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	int size = atoi(argv[1]);

	int *a = malloc(size * sizeof(int));

	for (int i = 0; i < size; i++) {
		a[i] = i;
	}

	int val = -99; // a number we know is not in the array

	clock_t start = clock();
	binarySearch(a, size, val);
	clock_t end = clock();

	double time = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Time taken: %lf seconds\n", time);

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
