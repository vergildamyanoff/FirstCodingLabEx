#include <iostream>
using namespace std;

int main()
{
    int lenght, width, height;
    double percentige;
    
    cin >> lenght >> width >> height >> percentige;

    double volumeInSM = lenght * width * height;
    double liters = volumeInSM / 1000;

    double unusedLiters = liters * percentige / 100.0;
    double useliters = liters - unusedLiters;

    cout << useliters << endl;

    return 0;
}
