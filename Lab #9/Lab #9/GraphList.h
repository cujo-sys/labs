#ifndef GRAPHLIST_H
#define GRAPHLIST_H

#include <iostream>
using namespace std;

class GraphList
{
	private:
		struct ListNode
		{
			int value;
			struct ListNode* next;
		};
		ListNode** headArray;
		int numVertices;
		int numEdges;
		
	public:

                
        GraphList (int vertices)
        {
                       
			numVertices = vertices;
			headArray = new ListNode * [numVertices];
			for (int i = 0; i < numVertices; i++)
			{
				headArray[i] = nullptr;
			}
		}

		~GraphList()
		{
            delete[] headArray;
        }

		void addEdgeList(int v1, int v2)
		{
           ListNode *node = new ListNode;
           node->value = v2;
           node->next = NULL;
           headArray[v1][v2].value = v1;
           headArray[v1][v2].next = node;
           numEdges += 1;
       }


		// Display Adjacency List
		void printAdjList()
		  {
           for(int i = 0; i < numVertices; i++)
           {
               for(int k = 0; k < numVertices; k++)
               {
                   if(headArray[i][k].value != NULL)
                   {
                       cout << headArray[i][k].value << " " << headArray[i][k].next->value << endl;
                   }
               }
           }
       }

};

#endif