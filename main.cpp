
#include "LinkedList.h"

int main()
{
    LinkedList students;
    int choice;

    // Initial student records
    students.Insert(CreateStudent(103, "Ali"));
    students.Insert(CreateStudent(101, "Ahmed"));
    students.Insert(CreateStudent(102, "Sara"));

    do
    {
        cout << "\n===== Student Record Management System =====" << endl;
        cout << "1. Display Students" << endl;
        cout << "2. Insert at Head" << endl;
        cout << "3. Remove from Head" << endl;
        cout << "4. Insert at Index" << endl;
        cout << "5. Remove at Index" << endl;
        cout << "6. Swap Students" << endl;
        cout << "7. Sort by Roll Number" << endl;
        cout << "8. Reverse List" << endl;
        cout << "9. Check List Status" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            students.Print();
        }
        else if (choice == 2)
        {
            int roll;
            string name;

            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter name (one word): ";
            cin >> name;

            students.Insert(CreateStudent(roll, name));
        }
        else if (choice == 3)
        {
            Student* removed = students.Remove();

            if (removed != nullptr)
            {
                cout << "Removed student: " << removed->name << endl;
                delete removed;
            }
            else
            {
                cout << "List is empty." << endl;
            }
        }
        else if (choice == 4)
        {
            int roll, index;
            string name;

            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter name (one word): ";
            cin >> name;
            cout << "Enter index: ";
            cin >> index;

            students.InsertAt(CreateStudent(roll, name), index);
        }
        else if (choice == 5)
        {
            int index;

            cout << "Enter index to remove: ";
            cin >> index;

            Student* removed = students.RemoveAt(index);

            if (removed != nullptr)
            {
                cout << "Removed student: " << removed->name << endl;
                delete removed;
            }
        }
        else if (choice == 6)
        {
            int first, second;

            cout << "Enter first index: ";
            cin >> first;
            cout << "Enter second index: ";
            cin >> second;

            students.Swap(first, second);
        }
        else if (choice == 7)
        {
            students.Sort();
            cout << "Students sorted by roll number." << endl;
        }
        else if (choice == 8)
        {
            students.Reverse();
            cout << "List reversed." << endl;
        }
        else if (choice == 9)
        {
            cout << "Is Empty: "
                 << (students.IsEmpty() ? "Yes" : "No") << endl;

            cout << "Is Not Empty: "
                 << (students.IsNotEmpty() ? "Yes" : "No") << endl;

            cout << "Total Students: " << students.Size() << endl;
        }
        else if (choice != 10)
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 10);

    cout << "Program ended." << endl;
    return 0;
}
