#include <iostream>
using namespace std;

int main()
{
    int nylon, paint, thinner, workingHours;
    cin >> nylon >> paint >> thinner >> workingHours;

    double naylonPrice = (nylon + 2) * 1.50;
    double paintPrice = (paint + (paint * 0.1)) * 14.50;
    double thinnerPrice = thinner * 5.00;

    double materialPrice = naylonPrice + paintPrice + thinnerPrice + 0.40;

    double workerPricePerHour = materialPrice * 0.30;
    double workerPrice = workerPricePerHour * workingHours;

    double allMoneyNeeded = materialPrice + workerPrice;

    cout << allMoneyNeeded << endl;

    return 0;
}
