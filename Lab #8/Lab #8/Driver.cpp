#include "Heap.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void display(string &anItem)
{
   cout << "Displaying item - " << anItem << endl;
}

int main()
{
   Student temp;
   Heap<Student> *studentPtr = new Heap<Student>(50);
   Student s1(3.5, "John Smith", "HPC");
   studentPtr->insert(s1);
   Student s2(4.0, "David Beckham", "COMMUNICATION");
   studentPtr->insert(s2);
   Student s3(3.8, "Michale Jackson", "CYBER SECURITY");
   studentPtr->insert(s3);
   Student s4(3.7, "Chris Brown", "DATA SCIENCE");
   studentPtr->insert(s4);
   Student s5(2.4, "Mark zuckerberg", "HPC");
   studentPtr->insert(s5);
   Student s6(2.0, "Paul Shah", "DATA SCIENCE");
   studentPtr->insert(s6);
   Student s7(3.2, "Daniel Bryan", "COMMUNICATION");
   studentPtr->insert(s7);
   Student s8(3.4, "James Rodriguez", "HPC");
   studentPtr->insert(s8);
   Student s9(3.9, "Maria Sharapova", "COMMUNICATION");
   studentPtr->insert(s9);
   Student s10(2.5, "Anthony Gonzalez", "CYBER SECURITY");
   studentPtr->insert(s10);

   while (!studentPtr->isEmpty())
   {
      cout << "# of nodes: " << studentPtr->getNumberOfNodes() << endl;
      cout << "Height: " << studentPtr->getHeight() << endl;
      temp = studentPtr->remove();
      cout << temp << endl<< endl;
   } // end while

   return 0;
}