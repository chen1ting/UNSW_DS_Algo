
CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

.PHONY: all
all: runGraphAdjMatrix runGraphAdjList runGraphArrayOfEdges

runGraphAdjMatrix: runGraph.c GraphAdjMatrix.c
	$(CC) $(CFLAGS) -o runGraphAdjMatrix runGraph.c GraphAdjMatrix.c

runGraphAdjList: runGraph.c GraphAdjList.c
	$(CC) $(CFLAGS) -o runGraphAdjList runGraph.c GraphAdjList.c

runGraphArrayOfEdges: runGraph.c GraphArrayOfEdges.c
	$(CC) $(CFLAGS) -o runGraphArrayOfEdges runGraph.c GraphArrayOfEdges.c

.PHONY: clean
clean:
	rm -rf *.dSYM
	rm -f runGraphAdjMatrix runGraphAdjList runGraphArrayOfEdges

