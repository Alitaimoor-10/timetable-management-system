#include <iostream>
#include "timetable.h"
using namespace std;

void addTimetable(Slot timetable[DAYS][SLOTS])
{
    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < SLOTS; j++)
        {
            cout << "\nDay " << i + 1 << " Slot " << j + 1 << endl;

            cout << "Subject: ";
            getline(cin, timetable[i][j].subject);

            cout << "Teacher: ";
            getline(cin, timetable[i][j].teacher);

            cout << "Time: ";
            getline(cin, timetable[i][j].time);

            cout << "Room: ";
            getline(cin, timetable[i][j].room);

            cout << "Lecture Type: ";
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
        cout << "\nDay " << i + 1 << endl;

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
