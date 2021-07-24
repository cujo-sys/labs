#ifndef HEAP
#define HEAP

#include "Student.h"
#include <cmath> // for log2 & ceil
#include <iostream>
using namespace std;

template <typename ItemType>
class Heap
{
private:
	ItemType *items; // Array of heap items
	int heap_size;	 // Current count of heap items
	int capacity;	 // Maximum capacity of the heap

	int parent(int i) //get the parent of index i
	{
		return (i - 1) / 2;


	}
	int left(int i) //get the left child of index i
	{
		
		return (2 * i) + 1;



	}
	int right(int i) //get the right child of index i
	{
		return (2 * i) + 2;


	}
	
	void swap(ItemType *x, ItemType *y)
	{
		// Swap values
		// Write your code here!




		
	}

	bool isLeaf(int nodeIndex) // Tests whether this node is a leaf.
	{
		return (left(nodeIndex) >= heap_size);
	}


	// Converts a semiheap to a heap.
	void heapRebuild(int subTreeRootIndex);


public:
	Heap(int);
	~Heap();

	bool isEmpty() const; // Checks to see if the heap is empty

	int getNumberOfNodes() const; // Gets the number of nodes in this heap.

	int getHeight() const; // Gets the height of this heap.

	void insert(ItemType newData); //Insert newData in the heap

	ItemType remove(); //Remove the root (maximum value) & returns it
};

//******************************************************************
//
// Private functions start here
//
//******************************************************************

template <typename ItemType>
void Heap<ItemType>::heapRebuild(const int subTreeNodeIndex)
{
	if (!isLeaf(subTreeNodeIndex))
	{
    if(!isLeaf(subTreeNodeIndex))
    {
        int leftChildIndex = getLeftChildIndex(subTreeNodeIndex);

        int largerChildIndex = leftChildIndex;

        int rightChildIndex = getRightChildIndex(subTreeNodeIndex);

        if(rightChildIndex < heap_size)
        {
            if(items[rightChildIndex] > items[largerChildIndex])
                largerChildIndex = rightChildIndex;
        }

        if(items[subTreeNodeIndex] < items[largerChildIndex])
        {
            swap(items[largerChildIndex], items[subTreeNodeIndex]);
            heapRebuild(largerChildIndex);
        }
    }
}


//******************************************************************
//
// Public functions start here
//
//******************************************************************

template <typename ItemType>
Heap<ItemType>::Heap(int num)
{
	heap_size = 0;
	capacity = num;
	items = new ItemType[capacity];
}

template <typename ItemType>
Heap<ItemType>::~Heap()
{
	delete[] items;
}

template <typename ItemType>
bool Heap<ItemType>::isEmpty() const
{
	if (heap_size == 0)
		return true;
	else
		return false;
}

template <typename ItemType>
int Heap<ItemType>::getHeight() const
{
	return ceil(log2(heap_size + 1));
}

template <typename ItemType>
int Heap<ItemType>::getNumberOfNodes() const
{
	return heap_size;
}


template <typename ItemType>
void Heap<ItemType>::insert(ItemType newData)
 {

    bool attempts = false;

    if(heap_size < maxItems)
    {
        items[heap_size] = newData;

        bool index = false;

        int newDataIndex = heap_size;

        while((newDataIndex > 0) && !index)
        {
            int parentIndex = getParentIndex(newDataIndex);

            if(items[newDataIndex] < items[parentIndex])
            {
                index = true;
            } else
            {
                swap(items[newDataIndex], items[parentIndex]);
                newDataIndex = parentIndex;
            }

        }
        heap_size++;
        attempts = true;
    }
	return attempts;
}


template <typename ItemType>
ItemType Heap<ItemType>::remove()
{
	ItemType temp;
	bool tempz = false;
	if (!isEmpty())
	{
		items[ROOT] = items[heap_size-1];
        heap_size--;
        heapRebuild(ROOT);
        tempz = true;






	}
	else
	{
		cout << "\nThe heap is empty so I can't remove any values.\n";
	}

	return tempz;
}

#endif
