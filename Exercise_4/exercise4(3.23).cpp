#include <iostream>
#include <vector>
using namespace std;

int main() {  
    vector<int> num(10);

    int n = 1;
    vector<int>::iterator it = num.begin();
    vector<int>::iterator itEnd = num.end();

    while (it != itEnd)
    {
        *it = n = n*2;
        cout << *it << " ";
        it++;
    }
}