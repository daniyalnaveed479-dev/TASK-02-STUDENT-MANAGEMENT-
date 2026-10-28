
#include "LinkedList.h"

Student* LinkedList::Remove()
{
    if (IsEmpty())
        return nullptr;

    Student* student = head;
    head = head->next;

    student->next = nullptr;
    count--;

    return student;
}
