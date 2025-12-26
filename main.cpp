#include <iostream>
#include "timetable.h"

using namespace std;

int main()
{

    Slot myTimetable[DAYS][SLOTS];

    int choice;


    do
    {
        
        cout << "   TIMETABLE MANAGEMENT SYSTEM\n";
        cout << "\n";
        cout << "1. Fill Entire Timetable (Bulk Add)\n";
        cout << "2. View Timetable\n";
        cout << "3. Update Specific Slot\n";
        cout << "4. Delete Specific Slot\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
       
        cin.ignore(); 

        switch (choice)
        {
        case 1:
           
            cout << "Starting new timetable setup...\n";
            addTimetable(myTimetable);
            break;
        case 2:
            viewTimetable(myTimetable);
            break;
        case 3:
            updateTimetable(myTimetable);
            break;
        case 4:
            deleteTimetable(myTimetable);
            break;
        case 5:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
