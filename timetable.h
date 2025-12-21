#ifndef TIMETABLE_H

#define TIMETABLE_H

#include <iostream>

using namespace std;

const int DAYS = 5;
const int SLOTS = 7;

static string days[DAYS] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
};

class Timetable {
    public:

    string subject[DAYS][SLOTS];
    string teacher[DAYS][SLOTS];
    string timeSlot[DAYS][SLOTS];
    string room[DAYS][SLOTS];
    string lecturType[DAYS][SLOTS];
    string notes[DAYS][SLOTS];
    
    Timetable() {

        for (int i = 0; i < DAYS; i++){
            for (int j = 0; j < SLOTS; i++){

                subject[i][j] = "";
                teacher[i][j] = "";
                timeSlot[i][j] = "";
                room[i][j] = "";
                lecturType[i][j] = "";
                notes[i][j] = "";
            }
        }
    }
};

#endif