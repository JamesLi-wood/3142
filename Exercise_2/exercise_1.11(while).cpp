#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    
    cout<<"The range is "<<"";
    while (num1 != num2-1) {
        cout << num1+1 <<" ";
        num1++;
    }
}