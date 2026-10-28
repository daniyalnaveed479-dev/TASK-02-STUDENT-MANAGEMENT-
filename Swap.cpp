
#include "LinkedList.h"

void LinkedList::Swap(int index1, int index2)
{
    if (index1 < 0 || index2 < 0 ||
        index1 >= count || index2 >= count)
    {
        cout << "Invalid index!" << endl;
        return;
    }

    if (index1 == index2)
        return;

    Student* first = head;
    Student* second = head;

    for (int i = 0; i < index1; i++)
        first = first->next;

    for (int i = 0; i < index2; i++)
        second = second->next;

    int tempRoll = first->rollNo;
    first->rollNo = second->rollNo;
    second->rollNo = tempRoll;

    string tempName = first->name;
    first->name = second->name;
    second->name = tempName;
}
