
#include "LinkedList.h"

void LinkedList::Print()
{
    if (IsEmpty())
    {
        cout << "No student records found." << endl;
        return;
    }

    Student* current = head;
    int index = 0;

    while (current != nullptr)
    {
        cout << "Index: " << index
             << " | Roll No: " << current->rollNo
             << " | Name: " << current->name << endl;

        current = current->next;
        index++;
    }

    cout << "Total Students: " << count << endl;
}
