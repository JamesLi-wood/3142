#include <iostream>
using namespace std;

class Sample {
    private:
        int x;
        double y;
    public :
        Sample() { // Constructor 1
            x = 0;
            y = 0;
        }
        
        Sample(int a) { //Constructor 2
            x = a;
            y = 0;
        }
        
        Sample(int a, int b) { //Constructor 3
            x = a;
            y = b;
        }
        
        Sample(int a, double b) { //Constructor 4
            x = a;
            y = b;
        }
};