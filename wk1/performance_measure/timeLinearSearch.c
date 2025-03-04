// Time this program by using the time command:
// 
// time ./timeLinearSearch <array size>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int size, int val);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "usage: %s <array size>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	int size = atoi(argv[1]);

	int *a = calloc(size, sizeof(int));

	int val = -99; // we know this won't be in the array

	clock_t start = clock();
	linearSearch(a, size, val);
	clock_t end = clock();

	double time = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Time taken: %lf seconds\n", time);

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

