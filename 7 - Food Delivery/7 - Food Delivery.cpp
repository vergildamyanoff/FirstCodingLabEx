#include <iostream>
using namespace std;

int main()
{
    int chikenMenus, fishMenus, vegiMenus;
    cin >> chikenMenus >> fishMenus >> vegiMenus;

    double chikenMenusPrice = chikenMenus * 10.35;
    double fishMenusPrice = fishMenus * 12.40;
    double vegiMenusPrice = vegiMenus * 8.15;

    double menuPrice = chikenMenusPrice + fishMenusPrice + vegiMenusPrice;

    double desert = menuPrice * 0.2;

    double bill = menuPrice + desert + 2.50;

    cout << bill << endl;


    return 0;
}
