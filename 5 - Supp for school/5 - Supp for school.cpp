#include <iostream>
using namespace std;

int main()
{
    int pensBags, markerBags, detergentInLiters, discountPercentage;

    cin >> pensBags >> markerBags >> detergentInLiters >> discountPercentage;
    
    double pensBagsPrice = pensBags * 5.80;
    double markerBagsPrice = markerBags * 7.20;
    double detergentInLitersPrice = detergentInLiters * 1.20;

    double materialsPrice = pensBagsPrice + markerBagsPrice + detergentInLitersPrice;

    double price = materialsPrice - (materialsPrice * (discountPercentage / 100.0));

    cout << price << endl;
    return 0;
}
