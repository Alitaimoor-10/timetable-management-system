#include <iostream>
#include "timetable.h"
using namespace std;

void addTimetable(Slot timetable[DAYS][SLOTS])
{
    for (int i = 0; i < DAYS; i++)
    {
        cout << "\n--- Day " << i + 1 << " ---\n";

        for (int j = 0; j < SLOTS; j++)
        {
            cout << "\nSlot " << j + 1 << endl;

            cout << "Subject: ";
            getline(cin, timetable[i][j].subject);

            cout << "Teacher: ";
            getline(cin, timetable[i][j].teacher);

            cout << "Time: ";
            getline(cin, timetable[i][j].time);

            cout << "Room/Class Number: ";
            getline(cin, timetable[i][j].room);

            cout << "Lecture Type (Lecture/Lab/Tutorial): ";
            getline(cin, timetable[i][j].lectureType);

            cout << "Notes: ";
            getline(cin, timetable[i][j].notes);
        }
    }
}

void viewTimetable(Slot timetable[DAYS][SLOTS])
{
    for (int i = 0; i < DAYS; i++)
    {
        cout << "\n===== Day " << i + 1 << " =====\n";

        for (int j = 0; j < SLOTS; j++)
        {
            cout << timetable[i][j].time << " | "
                 << timetable[i][j].subject << " | "
                 << timetable[i][j].teacher << " | "
                 << timetable[i][j].room << " | "
                 << timetable[i][j].lectureType << " | "
                 << timetable[i][j].notes << endl;
        }
    }
}

void updateTimetable(Slot timetable[DAYS][SLOTS])
{
    int day, slot;

    cout << "Enter Day (1-5): ";
    cin >> day;
    cout << "Enter Slot (1-7): ";
    cin >> slot;
    cin.ignore();

    day--;
    slot--;

    if (day >= 0 && day < DAYS && slot >= 0 && slot < SLOTS)
    {
        cout << "New Subject: ";
        getline(cin, timetable[day][slot].subject);

        cout << "New Teacher: ";
        getline(cin, timetable[day][slot].teacher);

        cout << "New Time: ";
        getline(cin, timetable[day][slot].time);

        cout << "New Room: ";
        getline(cin, timetable[day][slot].room);

        cout << "New Lecture Type: ";
        getline(cin, timetable[day][slot].lectureType);

        cout << "New Notes: ";
        getline(cin, timetable[day][slot].notes);

        cout << "Timetable slot updated successfully.\n";
    }
    else
    {
        cout << "Invalid day or slot.\n";
    }
}

void deleteTimetable(Slot timetable[DAYS][SLOTS])
{
    int day, slot;

    cout << "Enter Day (1-5): ";
    cin >> day;
    cout << "Enter Slot (1-7): ";
    cin >> slot;

    day--;
    slot--;

    if (day >= 0 && day < DAYS && slot >= 0 && slot < SLOTS)
    {
        timetable[day][slot].subject = "";
        timetable[day][slot].teacher = "";
        timetable[day][slot].time = "";
        timetable[day][slot].room = "";
        timetable[day][slot].lectureType = "";
        timetable[day][slot].notes = "";

        cout << "Timetable slot deleted successfully.\n";
    }
    else
    {
        cout << "Invalid day or slot.\n";
    }
}

