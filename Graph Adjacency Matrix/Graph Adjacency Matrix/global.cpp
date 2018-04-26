#include "stdafx.h"
#include "global.h"
#include "iostream"

using namespace std;


global::global()
{
}


global::~global()
{
}

void global::add(int x, int y) {
	if (x < 0 || y < 0)
	{
		cout << "Invalid edge!\n";
	}
	else
	{
		matrix[x - 1][y - 1] = 1;
	}
};

void global::display()
{
	int i, j;
	cout << endl;
	for (i = 0; i < vertices; i++)
	{
		for (j = 0; j < vertices; j++) {
			cout << matrix[i][j] << "  "; 
		}
		cout << endl;
	}
}