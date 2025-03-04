# Define the compiler and flags
# 'CC' is the variable that stores the name of the compiler (clang in this case)
# 'CFLAGS' stores the flags to pass to the compiler
# '-Wall' enables all compiler warnings, and '-Werror' treats warnings as errors
CC = clang
CFLAGS = -Wall -Werror  # Enable all warnings and treat them as errors

# 'all' is the default target
# This target depends on a list of other targets, which means that
# when you run `make` without specifying a target, these targets will be built.
# It triggers the creation of various sorting executables.
all: gen \
     selectionSort bubbleSort insertionSort shellSort mergeSort \
     naiveQuickSort medianOfThreeQuickSort randomisedQuickSort

# Target for building the 'gen' executable from gen.c
# The 'gen' target depends on 'gen.c'. When 'gen.c' changes, the 'gen' target will be rebuilt.
# This command compiles 'gen.c' into the executable named 'gen'.
gen: gen.c
	$(CC) $(CFLAGS) -o gen gen.c  # Compile gen.c into the gen executable

# Target for building the selectionSort executable
# The 'selectionSort' target depends on 'sorter.c'.
# The macro 'SORT' is defined as 's' during the compilation process, making it specific to selectionSort logic.
selectionSort: sorter.c
	$(CC) "-DSORT='s'" $(CFLAGS) -o selectionSort sorter.c

# Target for building the bubbleSort executable
# Similar to selectionSort, this defines the 'SORT' macro as 'b' for bubbleSort.
bubbleSort: sorter.c
	$(CC) "-DSORT='b'" $(CFLAGS) -o bubbleSort sorter.c

# Target for building the insertionSort executable
# This defines the 'SORT' macro as 'i' for insertionSort.
insertionSort: sorter.c
	$(CC) "-DSORT='i'" $(CFLAGS) -o insertionSort sorter.c

# Target for building the shellSort executable
# This defines the 'SORT' macro as 'h' for shellSort.
shellSort: sorter.c
	$(CC) "-DSORT='h'" $(CFLAGS) -o shellSort sorter.c

# Target for building the mergeSort executable
# This defines the 'SORT' macro as 'm' for mergeSort.
mergeSort: sorter.c
	$(CC) "-DSORT='m'" $(CFLAGS) -o mergeSort sorter.c

# Target for building the naiveQuickSort executable
# This defines the 'SORT' macro as 'N' for naiveQuickSort.
naiveQuickSort: sorter.c
	$(CC) "-DSORT='N'" $(CFLAGS) -o naiveQuickSort sorter.c

# Target for building the medianOfThreeQuickSort executable
# This defines the 'SORT' macro as 'M' for medianOfThreeQuickSort.
medianOfThreeQuickSort: sorter.c
	$(CC) "-DSORT='M'" $(CFLAGS) -o medianOfThreeQuickSort sorter.c

# Target for building the randomisedQuickSort executable
# This defines the 'SORT' macro as 'R' for randomisedQuickSort.
randomisedQuickSort: sorter.c
	$(CC) "-DSORT='R'" $(CFLAGS) -o randomisedQuickSort sorter.c

# Clean up all generated executables
# This target removes all the compiled executables to ensure a fresh build.
# Running 'make clean' will delete the files listed below.
# It is useful when you want to remove all generated files and rebuild everything from scratch.
clean:
	rm -f gen \
	      selectionSort bubbleSort insertionSort shellSort mergeSort \
	      naiveQuickSort medianOfThreeQuickSort randomisedQuickSort
