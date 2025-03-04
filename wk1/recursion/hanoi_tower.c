#include <stdio.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    // Base case: If there's only one disk, move it directly
    if (numDisks == 1) {
        printf("Move disk 1 from %s to %s\n", fromRod, toRod);
        return;
    }

    // Move n-1 disks from the starting rod to the auxiliary rod
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);

    // Move the nth disk from the starting rod to the destination rod
    printf("Move disk %d from %s to %s\n", numDisks, fromRod, toRod);

    // Move the n-1 disks from the auxiliary rod to the destination rod
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}

int main() {
    int numDisks = 3; // Example: 3 disks
    solveHanoi(numDisks, "Rod A", "Rod C", "Rod B"); // Solve for Rod A to Rod C using Rod B as auxiliary
    return 0;
}