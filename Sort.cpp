
#include "LinkedList.h"

void LinkedList::Sort()
{
    if (head == nullptr)
        return;

    for (Student* i = head; i != nullptr; i = i->next)
    {
        for (Student* j = i->next; j != nullptr; j = j->next)
        {
            if (i->rollNo > j->rollNo)
            {
                int tempRoll = i->rollNo;
                i->rollNo = j->rollNo;
                j->rollNo = tempRoll;

                string tempName = i->name;
                i->name = j->name;
                j->name = tempName;
            }
        }
    }
}
