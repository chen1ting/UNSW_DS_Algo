// Implementation of the Graph ADT
// Undirected, unweighted
// Vertices are given by integers between 0 and V - 1

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"

struct graph {
	int nV;
	int nE;
	bool **edges;
};

static bool validVertex(Graph g, Vertex v);

/**
 * Returns a new graph with nV vertices
 */
Graph GraphNew(int nV) {
	Graph g = malloc(sizeof(struct graph));
	if (g == NULL) {
		fprintf(stderr, "error: out of memory\n");
		exit(EXIT_FAILURE);
	}

	g->nV = nV;
	g->nE = 0;

	g->edges = malloc(nV * sizeof(bool *));
	for (int i = 0; i < g->nV; i++) {
		g->edges[i] = calloc(nV, sizeof(bool));
	}

	return g;
}

/**
 * Frees all memory allocated to a graph
 */
void GraphFree(Graph g) {
	for (int i = 0; i < g->nV; i++) {
		free(g->edges[i]);
	}
	free(g->edges);
	free(g);
}

/**
 * Returns the number of vertices in a graph
 */
int GraphNumVertices(Graph g) {
	return g->nV;
}

/**
 * Returns the number of edges in a graph
 */
int GraphNumEdges(Graph g) {
	return g->nE;
}

/**
 * Returns true if there is an edge between v and w,
 * and false otherwise
 */
bool GraphIsAdjacent(Graph g, Vertex v, Vertex w) {
	assert(validVertex(g, v));
	assert(validVertex(g, w));

	return g->edges[v][w];
}

/**
 * Inserts an edge between v and w
 */
void GraphInsertEdge(Graph g, Vertex v, Vertex w) {
	assert(validVertex(g, v));
	assert(validVertex(g, w));

	if (g->edges[v][w]) {
		return;
	}
	
	g->edges[v][w] = true;
	g->edges[w][v] = true;
	g->nE++;
}

/**
 * Removes an edge between v and w
 */
void GraphRemoveEdge(Graph g, Vertex v, Vertex w) {
	assert(validVertex(g, v));
	assert(validVertex(g, w));

	if (!g->edges[v][w]) {
		return;
	}

	g->edges[v][w] = false;
	g->edges[w][v] = false;
	g->nE--;
}

/**
 * Returns the degree of a vertex
 */
int GraphDegree(Graph g, Vertex v) {
	assert(validVertex(g, v));

	int degree = 0;
	for (int i = 0; i < g->nV; i++) {
		if (g->edges[v][i]) {
			degree++;
		}
	}
	return degree;
}

/**
 * Displays a graph
 */
void GraphShow(Graph g) {
	printf("Number of vertices: %d\n", g->nV);
	printf("Number of edges: %d\n", g->nE);
	printf("Edges:\n");
	for (int i = 0; i < g->nV; i++) {
		printf("%2d:", i);
		for (int j = 0; j < g->nV; j++) {
			if (g->edges[i][j]) {
				printf(" %d", j);
			}
		}
		printf("\n");
	}
	printf("\n");
}

static bool validVertex(Graph g, Vertex v) {
	return (v >= 0 && v < g->nV);
}

