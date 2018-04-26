#pragma once
#define maxVertices 101
#define MAX 10


class global
{
public:
	global();
	~global();
	bool finished = 0;

	int i, j,         /* loop counters */
		x, y,
		best,        /* best combination found so far, column of matrix matrix */
		edgeCount,       /* number of edges for each node, column of matrix matrix after file read */
		edges,       /* number of edges for each node, column of matrix matrix after file read */
		matrix[maxVertices][maxVertices + 10], /* adjacency matrix of graph */
		maybe,       /*nodes that may be needed and are being tested, column of matrix matrix */
		maybeNot,    /*nodes that may not be needed and are being tested, column of matrix matrix */
		minutes,     /* run time minutes */
		hours,     /* run time hours */
		node1, node2, /* temporary nodes to read input file lines into */
		notRequired, /* nodes determined not to be needed, column of matrix matrix */
		required,    /* nodes determined to be needed, column of matrix matrix */
		sort,        /* sort column of matrix matrix */
		test,        /* test combination to see if it is a solution and how many nodes are required */
		verify,      /* matrix column for verifying solution */
		vertices;    /* number of nodes in the graph */
	int count[maxVertices]; /* count array */
	int mask[maxVertices];  /* mask array */
	void add(int x, int y);
	void display();
};

