
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

static bool bracketsMatch(int open, int close);

int main(void) {
	Stack s = StackNew();

	bool balanced = true;

	int ch;
	while ((ch = getchar()) != EOF) {
		if (ch == '(' || ch == '[' || ch == '{') {
			StackPush(s, ch);
		} else if (ch == ')' || ch == ']' || ch == '}') {
			if (StackSize(s) == 0) {
				balanced = false;
				break;
			}
			if (!bracketsMatch(StackPop(s), ch)) {
				balanced = false;
				break;
			}
		}
	}

	if (StackSize(s) > 0) {
		balanced = false;
	}

	printf("brackets %s balanced!\n", balanced ? "are" : "are not");

	StackFree(s);
}

static bool bracketsMatch(int open, int close) {
	return (open == '(' && close == ')') ||
		(open == '[' && close == ']') ||
		(open == '{' && close == '}');
}

