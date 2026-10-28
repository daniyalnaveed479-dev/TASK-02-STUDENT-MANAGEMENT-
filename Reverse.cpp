
#include "LinkedList.h"

void LinkedList::Reverse()
{
    Student* previous = nullptr;
    Student* current = head;
    Student* nextNode = nullptr;

    while (current != nullptr)
    {
        nextNode = current->next;
        current->next = previous;

        previous = current;
        current = nextNode;
    }

    head = previous;
}
