#ifndef GRAPHMAT_H
#define GRAPHMAT_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class GraphMat
{
private:
    int **adjMatrix;
    int numVertices;
    int numEdges;

public:
    GraphMat(int num_vertices) 
    {
        numVertices = num_vertices;
        adjMatrix = new int*[numVertices];
        for(int i = 0;i < numVertices;i++){
            adjMatrix[i] = new int[numVertices];
        }
        for(int i = 0; i < numVertices;i++){
            for(int k = 0; k < numVertices; k++){
                adjMatrix[i][k] = 0;
            }
        }
    }
    ~GraphMat()
    {
        delete [] adjMatrix;
    }
    // Add Edge 
    void addEdgeMat(int v1, int v2)
    {
        adjMatrix[v1][v2] = 1;
        numEdges += 1;
    }

    // print matrix
    void printAdjMat()
    {
        cout<<"Adjacency Matrix:"<<std::endl;
        for(int i = 0; i < numVertices; i++){
            for(int k = 0; k < numVertices; k++){
                cout<<adjMatrix[i][k]<<" ";
            }
        cout<<"\n";
        }
    }
};

#endif