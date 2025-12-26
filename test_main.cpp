#include <iostream>
#include "timetable.h"
using namespace std;

int main()
{
    Slot timetable[DAYS][SLOTS];

    addTimetable(timetable);
    viewTimetable(timetable);

    return 0;
}
