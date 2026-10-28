
#include "LinkedList.h"

void LinkedList::InsertAt(Student* student, int index)
{
    if (student == nullptr)
        return;

    if (index < 0 || index > count)
    {
        cout << "Invalid index!" << endl;
        delete student;
        return;
    }

    if (index == 0)
    {
        Insert(student);
        return;
    }

    Student* current = head;

    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    student->next = current->next;
    current->next = student;

    count++;
}
