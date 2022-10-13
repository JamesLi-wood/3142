#include <iostream>
using namespace std;

int sumOfDigits (int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
 
int main() {
    int num = 0;
    
    cout << "Enter a positive number: ";
    cin >> num;
    cout << "Sum of digits of the number " << num << " is " << sumOfDigits(num);
    return 0;
}