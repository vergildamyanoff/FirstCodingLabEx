#include <iostream>
using namespace std;

int main()
{
    int moneyForTrenningYear;
    cin >> moneyForTrenningYear;

    double snikersPrice = moneyForTrenningYear - (moneyForTrenningYear * 40 / 100.0);
    double dressingPrice = snikersPrice - (snikersPrice * 20 / 100.0);
    double ball = dressingPrice * 0.25;
    double accsesoaries = ball * 0.20;

    double price = moneyForTrenningYear + snikersPrice + dressingPrice + ball + accsesoaries;

    cout << price << endl;

    return 0;
}
