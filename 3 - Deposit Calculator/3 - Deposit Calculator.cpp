#include <iostream>
using namespace std;

int main()
{
    double depositSum;
    int periodInMounts;
    double percentige;

    cin >> depositSum >> periodInMounts >> percentige;

    double allDepositMoney = depositSum * (percentige / 100.0);
    double moneyForMounth = allDepositMoney / 12;
    double result = depositSum + (periodInMounts * moneyForMounth);

    cout << result << endl;


    return 0;
}
