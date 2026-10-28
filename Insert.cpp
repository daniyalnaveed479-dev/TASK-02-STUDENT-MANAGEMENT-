
#include "LinkedList.h"

void LinkedList::Insert(Student* student)
{
    if (student == nullptr)
        return;

    student->next = head;
    head = student;
    count++;
}
