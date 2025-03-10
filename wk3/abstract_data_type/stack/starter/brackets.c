
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

int main(void) {
	// TODO: Left as an exercise!
	Stack s = StackNew();

	bool balanced = true;

	// TODO: Add code here to read in one character at a time
	//       and check whether brackets are balanced or not
	//       (hint: use getchar())

	printf("brackets %s balanced!\n", balanced ? "are" : "are not");

	StackFree(s);
}

