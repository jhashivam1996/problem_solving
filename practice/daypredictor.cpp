#include <iostream>
using namespace std;

void IsLeap(int yy)
{
    if (yy % 400 != 0 && yy % 100 == 0)
    {
        cout << "\nYes this is the Leap year. ";
    }
    else
        cout << "\nNO this is not the Leap year.";
}

int DaysInMonth(int mm)
{
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        return 2;
    }
    else if (mm == 2)
    {
        return 0;
    }
    else
        return 3;
}

int CalExtraDays(int dd, int mm, int yy)
{
    int fyy = yy % 1600;
    int p1 = fyy % 100;
    int p2 = fyy - p1;
    int ed = ((p1 / 100) * 5) + p1 + (p1 / 4);
    for (int i = 0; i < mm; i++)
    {
        ed = ed + DaysInMonth(mm);
    }
    return ed + dd;
}

int CalDayNo(int ed)
{
    return ed % 7;
}

string PredictDay(int dayno)
{

    switch (dayno)
    {
    case 0:
        return "monday";
        break;
    case 1:
        return "tuesday";
        break;
    case 2:
        return "wednesday";
        break;
    case 3:
        return "thursday";
        break;
    case 4:
        return "friday";
        break;
    case 5:
        return "saturday";
        break;
    case 6:
        return "sunday";
    default:
        return "Not Available";
    }
}

int main()
{
    int dd, mm, yy;
    cout << "Enter Day:";
    cin >> dd;
    cout << "Enter Month:";
    cin >> mm;
    cout << "Enter Year:";
    cin >> yy;
    int ExtraDays = CalExtraDays(dd, mm, yy);
    int DayNo = CalDayNo(ExtraDays);

    cout << "The day on " << dd << "-" << mm << "-" << yy << " was " << PredictDay(DayNo) < ".";
    IsLeap(yy);
    return 0;
}
