
#include "LinkedList.h"

Student* CreateStudent(int rollNo, string name)
{
    Student* student = new Student;

    student->rollNo = rollNo;
    student->name = name;
    student->next = nullptr;

    return student;
}
