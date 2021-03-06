#include "stdafx.h"
#include <cassert>
#include <cfloat>
#include <cmath>
#include <fstream>
#include <iostream>
#include "string"
#include "global.h"
#include "vector"

using namespace std;

#define maxVertices 101
#define MAX 10

int main(int argc, char* argv[])
{
	global g;
	/* initialize the graph adjacency matrix *//* initialize the graph adjacency matrix */
	for (g.i = 0; g.i<maxVertices; g.i++) 
	{
		g.count[g.i] = g.i;
		g.mask[g.i] = g.i;
		for (g.j = 0; g.j<maxVertices + 10; g.j++)
		{
			g.matrix[g.i][g.j] = 0;
		}
	}
	// gets # of verticies
	cout << "Enter number of vertices: " << endl;
	cin >> g.vertices;

	if (g.vertices>50)
	{
		cout << "Maximum vertices in Graph is 50\n";
		return 1;
	}
	// gets edge count
	cout << "Enter edge count: " << endl;
	cin >> g.edgeCount; 
	// get nodes
	int x, y;
	for (int i = 0; i < g.edgeCount; i++)
	{
		cout << "Enter edge: " << endl;
		cin >> x >> y;
		g.add(x, y);
		g.add(y, x);
	}
	// displays graph
	g.display();

	return 0;
}


