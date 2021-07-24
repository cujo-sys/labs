#include <iostream>
#include <fstream>
#include "GraphList.h"
#include "GraphMat.h"
using namespace std;

int main()
{
	int numVerticies;
	int v1, v2;
	ifstream inFile;
	char filename[25];
	
	inFile.open("graph.txt");
	if(!inFile)
	{
		cout << "\n\nSorry.  That file doesn't exist!\n\n";
		exit(1);
	}
	inFile >> numVerticies;
	cout << "\n\nThere are " << numVerticies << " vertices in the graph.\n";
	
	GraphList myGraphList(numVerticies);
	GraphMat myGraphMat(numVerticies);

	while(inFile >> v1)
	{
		inFile >> v2;
		cout << "\nAdding an edge from " << v1 << " to " << v2 << ".";
		myGraphList.addEdgeList(v1, v2);
		myGraphMat.addEdgeMat(v1, v2);
	}

	cout << "\n\nAdjacency List...\n";
	myGraphList.printAdjList();
	
	cout << "\n\nAdjacency Matrix...\n";
	myGraphMat.printAdjMat();

	inFile.close();
	
	return 0;
}