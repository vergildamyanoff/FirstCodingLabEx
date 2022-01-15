#include <iostream>
using namespace std;

int main()
{
    int bookPages;
    int readedPagesForHour;
    int daysNeeded;

    cin >> bookPages >> readedPagesForHour >> daysNeeded;

    int hoursNeededForBook = bookPages / readedPagesForHour;
    int hoursEveryDay = hoursNeededForBook / daysNeeded;

    cout << hoursEveryDay << endl;
    return 0;
}
