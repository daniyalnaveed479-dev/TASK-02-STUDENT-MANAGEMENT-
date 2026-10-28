
#include "LinkedList.h"

Student* LinkedList::RemoveAt(int index)
{
    if (index < 0 || index >= count)
    {
        cout << "Invalid index!" << endl;
        return nullptr;
    }

    if (index == 0)
    {
        return Remove();
    }

    Student* current = head;

    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    Student* student = current->next;

    current->next = student->next;
    student->next = nullptr;

    count--;

    return student;
}

