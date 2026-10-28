
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

// Self-referential node structure
struct Student
{
    int rollNo;
    string name;
    Student* next;
};

// Linked List class
class LinkedList
{
private:
    Student* head;
    int count;

public:
    LinkedList();
    ~LinkedList();

    void Insert(Student* student);
    Student* Remove();

    void InsertAt(Student* student, int index);
    Student* RemoveAt(int index);

    void Swap(int index1, int index2);
    void Sort();
    void Reverse();
    void Print();

    bool IsEmpty();
    bool IsNotEmpty();
    int Size();
};

Student* CreateStudent(int rollNo, string name);

#endif
