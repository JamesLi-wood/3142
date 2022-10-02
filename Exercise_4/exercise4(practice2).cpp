#include <iostream>
using namespace std;

int main() {  
    int mouseMass = 35;
    int mouseSugar = 5;
    int ratio = mouseMass/mouseSugar;
    cout << "Whats the weight (pounds) at which you would stop dieting? ";
    int weight;
    cin >> weight;
    weight = weight * 453; // converts pounds to grams.
    int grams = weight / ratio;
    int sodaCount = 0;
    while (grams > 350) {
        grams = grams - 350;
        sodaCount++;
    }
    cout <<"you need to drink "<<sodaCount<<" cans of soda to reach a lethal dose.";
    
    return 0;
}