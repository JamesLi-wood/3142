#include <iostream>
#include<cmath>
using namespace std;
int main() {
    double percent;
    double price;
    int years;
    cout << "Enter the price: ";
    cin >> price;
    cout << "How many years from now will the item be purchased? ";
    cin >> years;
    cout << "Enter the inflation rate in terms of percent: ";
    cin >> percent;
    percent = percent/100;
    
    double future = price * pow(1+percent, years);
    cout << "The expected price would be " << future;

    return 0;
}